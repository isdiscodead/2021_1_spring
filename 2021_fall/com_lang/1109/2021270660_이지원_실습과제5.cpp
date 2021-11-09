#include <iostream>
using namespace std;


class Complex {
    int real;      // 실수부
    int imaginary; // 허수부

public:
    Complex() { real = imaginary = 0; }
    Complex(int r, int i) {
        real = r;
        imaginary = i;
    }

    friend ostream &operator<<(ostream &stream, Complex op2);

    // 연산자 함수 선언
    Complex operator +(Complex op2);
    Complex operator *(Complex op2);
    Complex& operator -=(Complex op2);
    bool operator !=(Complex op2);

    friend Complex operator ~(Complex op);
    friend Complex operator --(Complex& op, int notused);
    friend Complex& operator ++(Complex& op);
};


ostream &operator<< (ostream &stream, Complex op2) {
    stream << op2.real;
        if (op2.imaginary >= 0)
            stream << "+";
    stream << op2.imaginary << "i";
    return stream;
}


// 연산자 함수 구현
Complex Complex::operator + (Complex op2) {
    Complex temp;
    temp.real = this->real + op2.real;
    temp.imaginary = this->imaginary + op2.imaginary;
    return temp;
}

Complex Complex::operator * (Complex op2) {
    Complex temp;
    temp.real = (this->real * op2.real) - (this->imaginary * op2.imaginary);
    temp.imaginary = (this->real * op2.imaginary) + (this->imaginary * op2.real);
    return temp;
}

Complex& Complex::operator -= (Complex op2) {
    this->real -= op2.real;
    this->imaginary -= op2.imaginary;
    return *this;
}

bool Complex::operator!= (Complex op2) {
    if( (this->real!=op2.imaginary) && (this->imaginary!=op2.imaginary) ) return true;
    return false;
}

Complex operator ~ (Complex op) {
    Complex temp;
    temp.real = op.real;
    temp.imaginary = -(op.imaginary);
    return temp;
}

Complex operator -- (Complex& op, int notused) {
    Complex temp;
    temp = op;
    op.real -= 1;
    return temp;
}

Complex& operator ++(Complex& op) {
    op.real += 1;
    return op;
}


int main(void) {
    Complex a(-5, 7), b(2, -3), c;
    c = a + b;
    cout << "[c = a + b 실행 후]\n";
    cout << "a + b = (" << a << ") + (" << b << ") = " << c << "\n\n";
    c = a * b;
    cout << "[c = a * b 실행 후]\n";
    cout << "a * b = (" << a << ") * (" << b << ") = " << c << "\n\n";
    a -= b;
    cout << "[a -= b 실행 후]\n";
    cout << "a = " << a << "\t b = " << b << "\n\n";
    c = ~b;
    cout << "[c = ! b 실행 후]\n";
    cout << "c = " << c << "\t b = " << b << "\n\n";
    if (c != b)
        cout << "[c != b]\n\n";
    c = b--;
    cout << "[c = b-- 실행 후]\n";
    cout << "c = " << c << "\t b = " << b << "\n\n";
    c = ++b;
    cout << "[c = ++b 실행 후]\n";
    cout << "c = " << c << "\t b = " << b << "\n\n";
    return 0;
}