#include <iostream>
using namespace std;


template <class T>
class Circle {
    T radius;

public:
    Circle(T radius = 1) { this->radius = radius; }
    T getRadius() { return radius; }
    bool operator> ( Circle op );
};

template <class T>
bool Circle<T>::operator> ( Circle<T> op ) {
   return this->radius > op.getRadius();
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
    cout << "waffle과 pizza 중 큰 것의 반지름은 " << y.getRadius() << endl;
}