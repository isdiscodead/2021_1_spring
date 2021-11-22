#include <iostream>
using namespace std;

class Person;

class PersonManager {
public:
    bool equals(Person a, Person b);
};

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
    friend bool PersonManager::equals(Person a, Person b);
};

bool PersonManager::equals(Person a, Person b) {
    return ( a.getWeight() == b.getWeight() ) && ( a.getHeight() == b.getHeight() );
}

int main(void) {
    Person a(60, 170), b(60, 170);
    PersonManager m;
    
    if (m.equals(a,b)) cout << "체중과 신장이 같습니다." << endl;
    else cout << "체중과 신장이 다릅니다." << endl;

    return 0;
}