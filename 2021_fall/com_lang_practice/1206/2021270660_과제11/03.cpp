#include <iostream>
using namespace std;


class Person {
    string name;
    int age;

public: 
    void setName(string name) { this->name = name; }
    void setAge(int age) { this->age = age; }
    string getName() { return name; }
    int getAge() { return age; }
};


class Student : public Person {
    string school;
    string degree;

public: 
    void setSchool(string school) { this->school = school; }
    void setDegree(string degree) { this->degree = degree; }
    string getSchool() { return school; }
    string getDegree() { return degree; }
};


class Worker : public Student {
    string company;
    string job;

public: 
    void setCompany(string company) { this->company = company; }
    void setJob(string job) { this->job = job; }
    string getCompany() { return company; }
    string getJob() { return job; }

    void showInfo() { 
        cout << getName() << "(" << getAge() << ")\n";
        cout << getSchool() << "(" << getDegree() << ")\n";
        cout << getCompany() << "(" << getJob() << ")\n";
    }
};


int main(void) {
    Worker a;

    a.setName("김고대");
    a.setAge(30);
    a.setSchool("고려대학교");
    a.setDegree("학사");
    a.setCompany("Google");
    a.setJob("개발자");
    a.showInfo();
    
    return 0;
}