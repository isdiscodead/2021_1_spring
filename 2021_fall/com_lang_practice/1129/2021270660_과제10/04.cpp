#include <iostream>
using namespace std;

#define PI 3.14

class Sphere {
    int radius;

    public:
        Sphere(int r=2) { this->radius = r; }

        double getArea() { return 4 * PI * radius * radius; }
        int getRadius() { return radius; }
        void setRadius(int r) { this->radius = r; }

        void show() {
            cout << "반지름 = " << radius << ", 겉넓이 = " << getArea() << endl;
        }

        friend Sphere operator+ ( Sphere op1, Sphere op2 );
};


Sphere operator+ ( Sphere op1, Sphere op2 ) {
    Sphere result( op1.getRadius() + op2.getRadius() );
    return result;
}

int main(void) {
    Sphere golfBall;
    Sphere basketBall(12);

    Sphere bigBall;
    bigBall = golfBall + basketBall;

    golfBall.show();
    basketBall.show();
    bigBall.show();

    return 0;
}