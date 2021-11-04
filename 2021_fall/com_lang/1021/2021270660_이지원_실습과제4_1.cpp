#include <iostream>
using namespace std;

class Circle {
public:
    int radius;
    Circle() { radius = 1; }
    Circle(int r) { radius = r; }
    void show();
};

void swap(Circle &a, Circle &b);
void increaseBy(Circle &a, Circle &b);

int main(void) {
    Circle x(10), y(5);

    swap(x, y);

    cout << "x : ", x.show();
    cout << "y : ", y.show();
    cout << endl;

    // x의 반지름이 15로 변경
    increaseBy(x, y);
    cout << "x : ", x.show();
    cout << "y : ", y.show();

    return 0;
}

void Circle::show() {
    cout << "반지름이 " << radius << "인 원\n";
}

void swap(Circle &a, Circle &b) {
    Circle temp;    // 객체 치환이 가능하다는 것을 잊지 말자아아
    temp = a;
    a = b;
    b = temp;
}

void increaseBy(Circle &a, const Circle &b) {
    a.radius += b.radius;
    // setter 사용 시 a.setRadius(a.getRadius() + b.getRadius());
}