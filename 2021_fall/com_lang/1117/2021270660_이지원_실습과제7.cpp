#include <iostream>
#include <string>
using namespace std;


class Point {
    int x, y;

public:
    Point(int x, int y) { this->x = x; this->y = y; }
    int getX() { return x; }
    int getY() { return y; }

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
    ColorPoint cp1(5, 5, "RED");
    cp1.show();

    cp1.setPoint(10, 20);
    cp1.setColor("BLUE");
    cp1.show();

    ColorPoint cp2(5, 5); //BLACK에 좌표값 (5, 5)로 초기화
    cp2.show();

    cp2.setPoint(3, 7);
    cp2.setColor("GREEN");
    cp2.show(); // cp를 출력한다. ColorPoint zeroPoint; // BLACK에 (0, 0) 위치의 점

    ColorPoint zeroPoint;
    zeroPoint.show(); // zeroPoint를 출력한다.
    
    return 0;
}