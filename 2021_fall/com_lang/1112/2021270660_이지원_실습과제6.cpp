#include <iostream>
using namespace std;

class Fraction {
    int num;   // 분자(numerator)
    int denom; // 분모(denominator)
public:
    Fraction(int n = 1, int d = 1) {
        num = n;
        denom = d;
    }

    int getNum() { return this->num; }
    int getDenom() { return this->denom; }
    void setNum( int n ) { this->num = n; }
    void setDenom( int d ) { this->denom = d; }

    //연산자 함수 선언
    Fraction operator+ (Fraction op2);
    bool operator== (Fraction op2);
    Fraction operator^ (int op2);
    Fraction operator++ (int notused);
    Fraction& operator*= (Fraction op2);

    friend ostream& operator<< (ostream& stream, Fraction op);
    friend bool operator< (Fraction op1, Fraction op2);
    friend Fraction operator/ (int op1, Fraction op2);
    friend Fraction operator~ (Fraction op);
    friend Fraction& operator-- (Fraction& op);
};


int main( void ) {
    Fraction f1(3, 4), f2(2, 5), f3, f4(7, 15), f5(6, 15);
    
    f3 = f1 + f2; //분수 + 분수
    cout << f1 << " + " << f2 << " = " << f3 << "\n\n";

    if (f2 == f5)
        cout << f2 << " == " << f5 << "\n\n";
    if (f2 == f4)
        cout << f2 << " == " << f4 << "\n\n";
    if (f2 < f1)
        cout << f2 << " < " << f1 << "\n\n";

    f1 *= f2; //분수 *= 분수
    cout << f1 << " *= " << f2 << " ===> f1 = " << f1 << "\n\n";

    f3 = f2 ^ 3; // 분수 ^ 정수 (분수의 정수 제곱승 구현)
    cout << "( " << f2 << " )^3 = " << f3 << "\n\n";

    f3 = 5 / f2; // 정수 / 분수
    cout << "5 / (" << f2 << ") = " << f3 << "\n\n";

    f3 = ~f2; // ~ 분수(분수의 역수 계산)
    cout << "~( " << f2 << " ) = " << f3 << "\n\n";
    
    cout << "(" << f1 << ")++ = ";
    f4 = f1++;
    cout << f1 << "\n";
    cout << "후위 연산 수행 후, f4 = " << f4 << "\n\n";
    cout << "--(" << f2 << ") = ";
    f4 = --f2;
    cout << f2 << "\n";
    cout << "전위 연산 수행 후, f4 = " << f4 << "\n\n";
    
    return 0;
}

// 연산자 함수 구현
Fraction Fraction::operator+ (Fraction op2) {
    Fraction result;
    result.setDenom(this->getDenom() * op2.getDenom() );
    result.setNum( this->getNum() * op2.getDenom() + this->getDenom() * op2.getNum() );
    return result;
}

bool Fraction::operator== (Fraction op2) {
    if( this->getNum() / double(this->getDenom()) == op2.getNum() / double(op2.getDenom()) ) {
        return true;
    }
    return false;
}

Fraction Fraction::operator^ (int op2) {
    Fraction result;
    for( int i=0; i < op2 ; i++ ) {
        result.setDenom( result.getDenom() * this->getDenom() );
        result.setNum( result.getNum() * this->getNum() );
    }
    return result;
}

Fraction Fraction::operator++ (int notused) {
    Fraction result = *this;
    this->setNum( this->getNum() + this->getDenom() );
    return result;
}

Fraction& Fraction::operator*= (Fraction op2) {
    this->setDenom( this->getDenom() * op2.getDenom() );
    this->setNum( this->getNum() * op2.getNum() );
    return *this;
}

ostream& operator<< (ostream& stream, Fraction op) {
    stream << op.getNum() << "/" << op.getDenom();
    return stream;
}

bool operator< (Fraction op1, Fraction op2) {
    if( (op1.getNum() / double(op1.getDenom())) < (op2.getNum() / double(op2.getDenom())) ) {
        return true;
    }
    return false;
}

Fraction operator/ (int op1, Fraction op2) {
    Fraction result;
    result.setNum( op1 * op2.getDenom() );
    result.setDenom( 1 * op2.getNum() );
    return result;
}

Fraction operator~ (Fraction op) {
    Fraction result;
    result.setNum( op.getDenom() );
    result.setDenom( op.getNum() );
    return result;
}

Fraction& operator-- (Fraction& op) {
    op.setNum( op.getNum() - op.getDenom() );
    return op;
}