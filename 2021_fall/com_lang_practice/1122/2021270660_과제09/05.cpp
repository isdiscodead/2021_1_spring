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
    bool operator== ( Person op2 );
};

void Person::show() {
    cout << "체중(kg) = " << this->weight << ", 신장(cm) = " << this->height << endl;
}

bool Person::operator== ( Person op2 ) {
    return ( this->weight == op2.getWeight() ) && ( this->height == op2.getHeight() );
}

int main(void) {
    Person a(70, 180), b(70, 180);

    a.show();
    b.show();
    if ( a == b ) cout << "키와 몸무게가 같습니다." << endl;
    else cout << "키와 몸무게가 다릅니다." << endl;

    return 0;
}