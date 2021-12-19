#include <iostream>
#include <string>
using namespace std;


class Point {
    int x, y;

public:
    Point(int x, int y) { this->x = x; this->y = y; }
    int getX() { return x; }
    int getY() { return y; }
    void show() { cout << "base" << endl; }
    void set(int x, int y) { this->x = x; this->y = y; }

protected:
    void move(int x, int y) { this->x = x; this->y = y; }
};


// main() 함수가 실행 가능하도록 ColorPoint 정의
class ColorPoint : public Point {
    string color;

public:
    ColorPoint(int x=0, int y=0, string color="BLACK") : Point(x,y) { this->color = color; }
    void setColor(string color) { this->color = color; }
    void setPoint(int x, int y) { this->move(x, y); }
    void show();
};


void ColorPoint::show() { 
    cout << this->color << "색으로 (" << this->getX() << "," << this->getY() << ")에 위치한 점입니다.\n";  
}


int main(void) {
    ColorPoint cp(5, 5, "RED");
    Point p(1,1);

    ColorPoint *pDer;
    Point *pBase;

    pBase = &cp;
    pBase -> set(3,4);
    pBase -> show();

/*
    pDer = (ColorPoint *)pBase;
    pDer -> setColor("White");
    pDer -> show();
*/

    pDer = (ColorPoint *)&p;
    pDer -> setColor("White");
    pDer -> setPoint(5,5);
    pDer -> show(); // 왜... 오류가 안 나지??... 

    return 0;
}