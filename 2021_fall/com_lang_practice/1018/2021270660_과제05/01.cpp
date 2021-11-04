#include <iostream>
using namespace std;

class Student {
public:
    // 다른 얘기가 없어서 그냥 public으로 선언... 
    int age = 0;
    int height = 0;
    int weight = 0;

    int getAge() { return age; }
    int getHeight() { return height; }
    int getWeight() { return weight; }
};

int main(void) {
    Student A, B, C;

    A.age = 20;
    A.height = 180;
    A.weight = 75;

    B.age = 22;
    B.height = 169;
    B.weight = 62;

    cout << "학생 A : " << A.getAge() << "살 / " << A.getHeight() << "cm / " << A.getWeight() << "kg\n"; 
    cout << "학생 B : " << B.getAge() << "살 / " << B.getHeight() << "cm / " << B.getWeight() << "kg\n";
    cout << "학생 C : " << C.getAge() << "살 / " << C.getHeight() << "cm / " << C.getWeight() << "kg\n";

    return 0;
}