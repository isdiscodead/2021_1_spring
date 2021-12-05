#include <iostream>
using namespace std;

class A {
public:
    void f1(){ cout << "A::f1()\n"; }
    virtual void f2() { cout << "A::f2()\n"; }
    void f3(){ cout << "A::f3()\n"; }
};

class B : public A {
public:
    void f1(){ cout << "B::f1()\n"; }
    void f2() { cout << "B::f2()\n"; }
    // virtual이 있으면 자식에 한해서 가상 함수가 됨 -> 자식이 있을 수도 있으니 동적 바인딩을 위해 기다리게 됨
    // virtual이 없으면 그냥 정적바인딩이 되기 때문에 B의 f3()의 시작 주소가 연결되고 멤버변수에 접근 X 이므로 실행되는 것
    virtual void f3() { cout << "B::f3()\n"; }
};

class C : public A {
public:
    void f2() { cout << "C::f2()\n"; }
};

int main(void) {
    B *pB = (B*)(new A);    // 다운 캐스팅
    
    pB -> f1();     // B::f1() 가상 함수 X
    pB -> f2();     // A::f2() 출력됨 
    // f2()는 가상 함수, 동적 바인딩은 X, 하지만 다운 캐스팅에 의한 실행 오류로 A의 함수 불러짐 ( 캐스팅 해봤자라는 거지~ )

    pB -> f3();     // line 1: 74809 Bus error: 10 ( Runtime error )

    // 교수님이 설명해주신 내용으로는 B *pB에 현재 (B*)(new A)가 들어 있으므로
    // pB -> f3(); 호출 시 f3(B* this)가 되고 이때 this는 (B*)(new A)가 됨
    // pB는 B*로 캐스팅된 주소를 가지고 있기 때문에 B의 f3()이 바인딩됨 ( B에는 f3()이 존재하니까! )
    
    // 실행 오류가 나지 않는 이유는 this의 멤버 변수를 건들지 않기 때문... -> 실제 B 객체의 주소가 필요하지 않아서 오류가 안 난다는 건가?

    // 실제로 찾아간 주소에는 B 객체가 아닌 A 객체이기 때문에 f3()이 없지 않나?? "실제 주소의 객체에 없더라도 바인딩만 되면 함수 접근 자체는 가능한 건가?"
    // -> YES! 

    /*
    Bus errors are rare nowadays on x86 and occur when your processor cannot even attempt 
    the memory access requested, typically:

    using a processor instruction with an address that does 
    not satisfy its alignment requirements.
    Segmentation faults occur when accessing memory which 
    does not belong to your process, they are very common and
    are typically the result of:

    using a pointer to something that was deallocated.
    using an uninitialized hence bogus pointer.
    using a null pointer.
    overflowing a buffer.
    */

    return 0;
}