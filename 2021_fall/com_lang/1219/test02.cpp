#include<iostream>
using namespace std;

class A {
public:
   ~A() { cout << "A\n"; }
};

class B : public A {
public:
   virtual ~B() { cout << "B\n"; }
};

class C : public B {
public:
   ~C() { cout << "C\n"; }
};

class D : public A {
public:
   ~D() { cout << "D\n"; }
};

int main()
{
    B* q = new C;
    delete q;

    cout << "=== B->C 업캐스팅 ===\n";

    q = new B;
    delete q;

    cout << "=== B 일반 ===\n";

    A* p = new C;
    delete p;

    cout << "=== A -> C 업캐스팅 ===\n";

    p = new D;
    delete p;

    cout << "=== A -> D 업캐스팅 ===\n";
   

   return 0;
}