#include <iostream>
using namespace std;

int add( int a, int b ) {
    return a+b;
}

int substract( int a, int b ) {
    return a-b;
}

int multiply( int a, int b ) {
    return a*b;
}

int divide( int a, int b ) {
    return a/b;
}

int main() {
    int a, b;
    cout << "두 정수를 입력하세요. >>";
    cin >>  a >> b;

    cout << "함수 사용 없이 계산\n";
    cout << a << " + " << b << " = " << a+b << endl;
    cout << a << " - " << b << " = " << a-b << endl;
    cout << a << " * " << b << " = " << a*b << endl;
    cout << a << " / " << b << " = " << a/b << "\n\n";

    cout << "함수 사용하여 계산\n";
    cout << "add(a, b) = " << add(a, b) << endl;
    cout << "substract(a, b) = " << substract(a, b) << endl;
    cout << "multiply(a, b) = " << multiply(a, b) << endl;
    cout << "divide(a, b) = " << divide(a, b) << endl;

    return 0;
}