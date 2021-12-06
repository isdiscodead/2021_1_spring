#include <iostream>
using namespace std;

class Car {
    int speed;

public:
    void setSpeed(int s) { speed = s; }
    int getSpeed() { return speed; }
    void speedUp(int increment) { speed += increment; }
    void speedDown(int decrement) { speed -= decrement; }
};


class SportsCar : public Car {
    bool turbo;

public:
    void setTurbo(bool newValue) { turbo = newValue; } 
    bool getTurbo() { return turbo; }
    void superTurbo() { 
        turbo = true;
        setSpeed(200);
    }
};


int main(void) {
    SportsCar c;
    c.setSpeed(60);
    c.setTurbo(true);
    cout << "현재 속도 = " << c.getSpeed() << endl;
    cout << "터보 모드 = " << c.getTurbo() << endl;

    c.setTurbo(0);
    c.speedDown(20);
    cout << "현재 속도 = " << c.getSpeed() << endl;
    cout << "터보 모드 = " << c.getTurbo() << endl;

    c.superTurbo();
    cout << "현재 속도 = " << c.getSpeed() << endl;
    cout << "터보 모드 = " << c.getTurbo() << endl;

    return 0;
}