#include <iostream>
using namespace std;

class Person;

class PersonManager {
public:
    bool equals(Person a, Person b);
    void copy(Person& a, Person b);
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
    friend PersonManager;
};

bool PersonManager::equals(Person a, Person b) {
    return ( a.getWeight() == b.getWeight() ) && ( a.getHeight() == b.getHeight() );
}
void PersonManager::copy(Person& a, Person b) {
    a = b;
}

int main(void) {
    Person a(60, 170), b(70, 176);
    PersonManager m;
    
    if (m.equals(a,b)) cout << "체중과 신장이 같습니다." << endl;
    else cout << "체중과 신장이 다릅니다." << endl;
    
    m.copy(b, a);
    if (m.equals(a,b)) cout << "체중과 신장이 같습니다." << endl;
    else cout << "체중과 신장이 다릅니다." << endl;

    return 0;
}