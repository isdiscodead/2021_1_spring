#include <iostream>
using namespace std;


class Student {
protected:
    string name;
    int korean;
    int computer;

public:
    Student() {}
    string getName() { return name; }
};


class FirstGrade:Student {
    int math;

public:
    FirstGrade(string name, int korean, int computer, int math);

    double getAverage() {
        int sum = this->korean + this->computer + this->math;
        return sum / 3.0;
    }

    void display();
};


class SecondGrade:Student {
    int science;
    int moral;

public:
    SecondGrade(string name, int korean, int computer, int science, int moral);

    double getAverage() {
        int sum = this->korean + this->computer + this->science + this->moral;
        return sum / 4.0;
    }

    void display();
};


class ThirdGrade:Student {
    int english;
    int history;

public:
    ThirdGrade(string name, int korean, int computer, int english, int history);

    double getAverage() {
        int sum = this->korean + this->computer + this->english + this->history;
        return sum / 4.0;
    }

    void display();
};


int main(void) {
    FirstGrade f("홍길동", 90, 81, 88);         //이름, 국어 컴퓨터, 수학 점수 초기화
    SecondGrade s("장영실", 73, 91, 99, 68);    // 이름, 국어 컴퓨터, 과학, 도덕 점수 초기화
    ThirdGrade t("정도전", 81, 53, 80, 96);     // 이름, 국어, 컴퓨터, 영어, 국사 점수 초기화
    
    f.display();
    s.display();
    t.display();
    
    return 0;
}


void FirstGrade::display() {
    cout << "\n이름: " << this->name << "\n국어: " << this->korean << "\n컴퓨터: " << this->computer;
    cout << "\n수학: " << this->math;
    cout << "\n-------------------";
    cout << "\n평균: " << this->getAverage() << endl;
}

void SecondGrade::display() {
    cout << "\n이름: " << this->name << "\n국어: " << this->korean << "\n컴퓨터: " << this->computer;
    cout << "\n과학: " << this->science << "\n도덕: " << this->moral;
    cout << "\n-------------------";
    cout << "\n평균: " << this->getAverage() << endl;
}

void ThirdGrade::display() {
    cout << "\n이름: " << this->name << "\n국어: " << this->korean << "\n컴퓨터: " << this->computer;
    cout << "\n영어: " << this->english << "\n역사: " << this->history;
    cout << "\n-------------------";
    cout << "\n평균: " << this->getAverage() << endl;
}

FirstGrade::FirstGrade(string name, int korean, int computer, int math) {
    this->name = name;
    this->korean = korean;
    this->computer = computer;
    this->math = math;

}

SecondGrade::SecondGrade(string name, int korean, int computer, int science, int moral) {
    this->name = name;
    this->korean = korean;
    this->computer = computer;
    this->science = science;
    this->moral = moral;
}

ThirdGrade::ThirdGrade(string name, int korean, int computer, int english, int history) {
    this->name = name;
    this->korean = korean;
    this->computer = computer;
    this->english = english;
    this->history = history;
}