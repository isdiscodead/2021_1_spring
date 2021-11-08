#include <iostream>
using namespace std;

#define PI 3.14

class Sphere {
    int radius;

    public:
        Sphere();
        Sphere(int r);
        double getArea() { return 4 * PI * radius * radius; }
        int getRadius() { return radius; }
        void setRadius(int r) { this->radius = r; }
};


Sphere::Sphere() { 
    radius = 2; 
}

Sphere::Sphere(int r) { 
    radius = r; 
}

Sphere getGolfBall() {
    Sphere golfBall;
    return golfBall; 
}

Sphere getBasketBall() {
    Sphere basketBall(12);
    return basketBall; 
}


int main(void) {
    Sphere golfBall;
    golfBall = getGolfBall();
    cout << "반지름 = " << golfBall.getRadius() << endl;
    cout << "골프 공의 면적 = " << golfBall.getArea() << endl;

    Sphere basketBall;
    basketBall = getBasketBall();
    cout << "반지름 = " << basketBall.getRadius() << endl;
    cout << "농구 공의 면적 = " << basketBall.getArea() << endl;

    return 0;
}