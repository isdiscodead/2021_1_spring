#include <iostream>
using namespace std;


template <class T>
class Circle {
    T radius;

public:
    Circle(T radius = 1) { this->radius = radius; }
    T getRadius() { return radius; }
    bool operator> ( const Circle op ); // op2는 바뀌면 안 되므로 const 붙여주기
};


/*
// 연산자를 정의하는 방법
template <class T>
bool Circle<T>::operator> ( const Circle<T> op ) {
   return this->radius > op.getRadius();
}
*/


/* 
// bigger()를 재정의 하는 방법도 있음!
// 직접 데이터형 넣어서 구체화 할 때는 template 선언 X
Circle<int> bigger ( Circle<int> a, Circle<int> b) {
    if ( a.getRadius() > b.getRadius() ) {
        return a;
    }
    return b;
}
*/

template <class T>
Circle<T> bigger ( Circle<T> a, Circle<T> b) {
    if ( a.getRadius() > b.getRadius() ) {
        return a;
    }
    return b;
}


template <class T>
T bigger(T a, T b) { // 두 개의 매개 변수를 비교하여 큰 값을 리턴
    // 여기서 비교하는 것은 T 자체이기 때문에 사용자 정의 클래스를 비교하려면 연산자 정의 필요함
    if (a > b)
        return a;
    else
        return b;
}


int main( void ) {
    int a = 20, b = 50, c;

    c = bigger(a, b);
    cout << "20과 50중 큰 값은 " << c << endl;

    // waffle 객체(정수 반지름 10), pizza 객체(반지름 20), y 객체(반지름 1) 선언문
    Circle<int> waffle(10), pizza(20), y;

    y = bigger(waffle, pizza);
    // y = bigger(waffle.getRadius(), pizza.getRadius()) 
    // 안 되는 이유: y가 정수가 되어버리므로 y.getRadius()가 안 됨!! 
    cout << "waffle과 pizza 중 큰 것의 반지름은 " << y.getRadius() << endl;
}