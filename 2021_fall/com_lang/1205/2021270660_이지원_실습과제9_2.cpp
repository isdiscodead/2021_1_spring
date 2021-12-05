#include <iostream>
using namespace std;


class Student {
    string name;
protected:
    int korean;
    int computer;

public:
    Student(string name, int kor, int com) {
        this -> name = name;
        this -> korean = kor;
        this -> computer = com;
    }
    virtual ~Student() {};

    string getName() { return name; }
    virtual double getAverage() = 0;
};


class FirstGrade: public Student {
    int math;

public:
    FirstGrade(string name, int korean, int computer, int math) : Student(name, korean, computer) {
        this->math = math;
    }
    virtual ~FirstGrade() {};

    virtual double getAverage() {
        int sum = this->korean + this->computer + this->math;
        return sum / 3.0;
    }
};


class SecondGrade: public Student {
    int science;
    int moral;

public:
    SecondGrade(string name, int korean, int computer, int science, int moral) : Student(name, korean, computer)  {
        this->science = science;
        this->moral = moral;
    }
    virtual ~SecondGrade() {};

    virtual double getAverage() {
        int sum = this->korean + this->computer + this->science + this->moral;
        return sum / 4.0;
    }
};


class ThirdGrade: public Student {
    int english;
    int history;

public:
    ThirdGrade( string name, int korean, int computer, int eng, int his ) : Student(name, korean, computer) {
        this->english = eng;
        this->history = his;
    };
    virtual ~ThirdGrade() {};

    virtual double getAverage() {
        int sum = this->korean + this->computer + this->english + this->history;
        return sum / 4.0;
    }
};


int main(void) {
    Student *s[4];
    s[0] = new FirstGrade("고길동", 80, 70, 70);
    s[1] = new SecondGrade("둘리", 70, 60, 90, 70);
    s[2] = new ThirdGrade("도치", 90, 100, 90, 100);
    s[3] = new SecondGrade("도우너", 80, 90, 60, 100);

    for(int i = 0; i < 4; i++) {
        cout << "이름: " << s[i]->getName() << " \t평균: " << s[i]->getAverage() << endl;
    }
    
    // 동적할당 영역 반환 코드(delete 연산자 사용) 작성
    for (int i = 0; i < 3; i++) {
        delete s[i];
    }

    return 0;
}