#include <iostream>
using namespace std;

class Add {
    int a, b;
public:
    void setValue( int x, int y ) { a = x, b = y; }
    int calculate() { return a + b; }
};

class Sub {
    int a, b;
public:
    void setValue( int x, int y ) { a = x, b = y; }
    int calculate() { return a - b; }
};

class Mult {
    int a, b;
public:
    void setValue( int x, int y ) { a = x, b = y; }
    int calculate() { return a * b; }
};

class Div {
    int a, b;
public:
    void setValue( int x, int y ) { a = x, b = y; }
    double calculate() { return a / (double)b; }
};


int main() {
    Add a;
    Sub s;
    Div d;
    Mult m;

    while ( true ) {
        cout << "두 정수와 연산자를 입력하세요 ( 예 3+3 ) >>";
        int x, y;
        char c;
        cin >> x >> c >> y;

        switch( c ) {
            case '+' :
                a.setValue(x, y);
                cout << a.calculate() << endl;
                break; 

            case '-' :
                s.setValue(x, y);
                cout << s.calculate() << endl;
                break;             
                    
            case '/' :
                d.setValue(x, y);
                cout << d.calculate() << endl;
                break;    

            case '*' :
                m.setValue(x, y);
                cout << m.calculate() << endl;
                break; 

            default: 
                cout << "잘못된 입력입니다.\n";
                exit(0);
        }
    }
}