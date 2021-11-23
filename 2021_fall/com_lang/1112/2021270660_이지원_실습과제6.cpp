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
    result.denom = (denom * op2.denom );
    result.num = ( num * op2.denom + denom * op2.num );
    return result;
}

bool Fraction::operator== (Fraction op2) {
    // return ( num / double(denom) == op2.num / double(op2.denom) );
    // 정밀도( precision ) 문제 때문에 오류가 날 수 있음!! 따라서 다른 방법 사용
    return ( num*op2.denom == op2.num * denom );

}

Fraction Fraction::operator^ (int op2) {
    Fraction result;
    for( int i=0; i < op2 ; i++ ) {
        result.denom = result.denom * denom ;
        result.num = ( result.num * num );
    }
    return result;
}

Fraction Fraction::operator++ (int notused) {
    Fraction result = *this;
    this->num = ( num + denom );
    return result;
}

Fraction& Fraction::operator*= (Fraction op2) {
    this->denom = ( denom * op2.denom );
    this->num = ( num * op2.num );
    return *this;
}

ostream& operator<< (ostream& stream, Fraction op) {
    stream << op.num << "/" << op.denom;
    return stream;
}

bool operator< (Fraction op1, Fraction op2) {
    // return (op1.num / double(op1.denom)) < (op2.num / double(op2.denom));
    // 마찬가지로 정확도 문제로 인해 곱하기 방법 사용
    
    // 그런데 곱하기 사용 시 2/-5와 -3/4에서 오류가 남 
    // 8 vs 15로 -3/4가 더 크다고 됨!! ( 두 분모의 부호가 다를 때 )

    // -2/5와 -3/4는 -8 vs -15로 -2/5가 크다고 잘 된다
    // 같다의 경우엔 -8 vs -15나 8 vs 15나 똑같음
    if ( op1.denom * op2.denom < 0 ) {
        // 올바른 결과를 위해서는 전체에 - 곱해야 하므로 반대 경우로 return! 
        return !(op1.num * op2.denom < op2.num * op1.denom );
    }
    return ( op1.num * op2.denom < op2.num * op1.denom );
}

Fraction operator/ (int op1, Fraction op2) {
    Fraction result;
    result.num = ( op1 * op2.denom );
    result.denom = op2.num;
    return result;
}

Fraction operator~ (Fraction op) {
    Fraction result;
    result.num = op.denom;
    result.denom = op.num;

    // call by value이므로 아래 방법도 사용 가능!!
    // int tmp = op.denom;
    // op.denom = op.num;
    // op.num = tmp;

    return result;
}

Fraction& operator-- (Fraction& op) {
    op.num -= op.denom;
    return op;
}