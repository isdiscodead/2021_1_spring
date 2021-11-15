#include <iostream>
#include <string>

using namespace std;

class Students {

public: 

    // getter/setter 만들기 귀찮아서 Public으로 할게요 ㅠ 
    string name, phone, email;

    static int numOfStudents;
    static int getNumOfStudents() { return numOfStudents; }

    Students() {}

    Students(string name, string phone, string email) {
        this->name = name;
        this->phone = phone;
        this->email = email;
        numOfStudents++;
    }

    ~Students() { numOfStudents--; } 
    

};

int Students::numOfStudents = 0;

int main(void) {
    string name, phone, email;

    while(true) {
        char select;
        cout << "학생을 등록하시겠습니까? ( y or n ) : ";
        cin >> select;

        if ( select != 'y' ) break;

        cout << "학생 이름: ";
        cin >> name;

        cout << "학생 번호: ";
        cin >> phone;

        cout << "학생 메일: ";
        cin >> email;
        
        Students *p = new Students(name, phone, email);

        cout << p->name << " / " << p->phone << " / " << p->email << endl;
        cout << ">> 현재까지 등록한 학생 수 = " << Students::getNumOfStudents() << endl;
    }

    return 0;
}