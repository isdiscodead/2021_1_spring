#include <iostream>
using namespace std;

class Person {
    string name;
    int age;

public: 
    void setPerson(string pName, int age) {
        name = pName;
        this->age = age;
    }
    void setName(string name) { this->name = name; }
    void setAge(int age) { this->age = age; }

    string getName() { return name; }
    int getAge() { return age; } 

    void print() {
        cout << "이름: " << getName() << endl;
        cout << "나이: " << getAge() << endl;
    }
};


int main(void) { 
    Person a, b;

    a.setPerson("홍길동", 24);
    b.setName("이고대");
    b.setAge(20);
    
    a.print();
    b.print();

    return 0;
}