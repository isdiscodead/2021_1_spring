#include <iostream>
using namespace std;

class Person {
    int weight, height;
    string name;

public:
    Person(string n, int w, int h) { 
        this->name = n;
        this->weight = w;
        this->height = h;
    };
    Person(){}
    int getWeight() { return this->weight; }
    int getHeight() { return this->height; }
    void setWeight(int w) { this->weight = w; }
    void setHeight(int h) { this->height = h; }
    void show();
    Person& operator+=( int op2 );
    Person& operator-=( int op2 );
};

void Person::show() {
    cout << name << this->weight << "kg " << this->height << "cm" << endl;
}

Person& Person::operator+= ( int op2 ) {
    this->height += op2;
    return *this;
}

Person& Person::operator-= ( int op2 ) {
    this->weight -= op2;
    return *this;
}


int main(void) {
    Person a("홍길동", 50, 150);
    Person b("이순진", 90, 150);

    a.show();
    b.show();

    a += 30;
    b -= 30;

    a.show();
    b.show();

    return 0;
}