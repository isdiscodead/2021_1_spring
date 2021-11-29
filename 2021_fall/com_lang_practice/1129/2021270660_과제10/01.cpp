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

    Person& operator++() {
        weight++;
        height++;
        return *this;
    }
};


int main(void) {

    Person a(60, 170), b;
    a.show();
    b.show();

    b = ++a;
    a.show();
    b.show();

    return 0;
}