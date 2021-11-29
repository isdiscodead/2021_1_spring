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

    friend Person operator+ (int op1, Person op2);
};


Person operator+ (int op1, Person op2) {
    op2.height += op1;
    op2.weight += op1;
    return op2;
}


int main(void) {

    Person a(60, 170), b;
    a.show();
    b.show();

    b = 5 + a;
    a.show();
    b.show();

    b = 3 + b;
    b.show();

    return 0;
}