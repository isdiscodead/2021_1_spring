#include <iostream>
using namespace std;

class A {
public:
    void f1(){ cout << "a::f1()\n"; }
    virtual void f2() { cout << "A::f2()\n"; }
};

class B {
public:
    void f1(){ cout << "B::f1()\n"; }
    void f2() { cout << "B::f2()\n"; }
    virtual void f3() { cout << "B::f3()\n"; }
};

class C {
public:
    void f2() { cout << "C::f2()\n"; }
};

int main(void) {
    B *pB = (B*)(new A);
    pB -> f1();     // B::f1()
    pB -> f2();     // B::f2() 출력됨 -> 동적 할당 시 A의 주소가 B의 주소로 캐스팅 되었으므로 ?? 
    pB -> f3();     // A::f2() 출력됨 -> 왜???????
    return 0;
}