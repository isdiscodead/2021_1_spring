#include <iostream>
using namespace std;

class Box {
    double length, width, height;
public: 
    static int boxCount;
    Box() { 
        length = 2.0;
        width = 2.0;
        height = 2.0;
        boxCount ++;
    }
    Box(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
        boxCount ++;
    }
    ~Box() { boxCount --; }
    double volume() { return length * width * height; }
};

int Box::boxCount = 0;

int main(void) {
    Box box1;
    cout << "box1 생성 후 박스 수 = " << Box::boxCount << endl;
    Box box2(4.0, 4.0, 4.0);
    cout << "box2 생성 후 박스 수 = " << Box::boxCount << endl;
    Box box3(8.0, 8.0, 8.0);
    cout << "box3 생성 후 박스 수 = " << Box::boxCount << endl;
    
    cout << "전체 생성된 박스 수 = " << Box::boxCount << endl;

    cout << "box1.objectCount = " << box1.boxCount << endl;

    cout << "box1의 부피 = " << box1.volume() << endl;
    cout << "box2의 부피 = " << box2.volume() << endl;
    cout << "box3의 부피 = " << box3.volume() << endl;

    return 0;
}