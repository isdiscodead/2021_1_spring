#include <iostream>
using namespace std;


class Person {
    int weight, height;

public:
    Person(int w=0, int h=0) { 
        this->weight = w;
        this->height = h;
    };

    int getWeight() { return this->weight; }
    int getHeight() { return this->height; }

    void show() {
        cout << "체중(kg) = " << weight << ", 신장(cm) = " << height << endl;
    }

    friend Person operator+ (Person op1, Person op2);
};


Person operator+ (Person op1, Person op2) {
    op1.height += op2.height;
    op1.weight += op2.weight;
    return op1;
}


int main(void) {

    Person a(40, 155), b(50, 165), c;
    c = a + b;
    
    a.show();
    b.show();
    c.show();

    return 0;
}