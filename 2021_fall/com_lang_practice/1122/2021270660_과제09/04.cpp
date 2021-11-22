#include <iostream>
using namespace std;

class Person {
    int weight, height;

public:
    Person(int w, int h) { 
        this->weight = w;
        this->height = h;
    };
    Person(){}
    int getWeight() { return this->weight; }
    int getHeight() { return this->height; }
    void setWeight(int w) { this->weight = w; }
    void setHeight(int h) { this->height = h; }
    void show();
    Person operator+ ( Person op2 );
};

void Person::show() {
    cout << "체중(kg) = " << this->weight << ", 신장(cm) = " << this->height << endl;
}

Person Person::operator+ ( Person op2 ) {
    Person temp;
    temp.setHeight( this->height + op2.getHeight() );
    temp.setWeight( this->weight + op2.getWeight() );
    return temp;
}


int main(void) {
    Person a(60, 170), b(45, 160), c;

    c = a + b;

    a.show();
    b.show();
    c.show();

    return 0;
}