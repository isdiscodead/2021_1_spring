#include <iostream>
using namespace std;

#define PI 3.14

class Sphere {
    int radius;

    public:
        Sphere();
        Sphere(int r);
        double getArea() { return 4 * PI * radius * radius; }
};


Sphere::Sphere() { 
    radius = 2; 
    cout << "반지름이 " << radius << "cm인 구 생성\n";
}

Sphere::Sphere(int r) { 
    radius = r; 
    cout << "반지름이 " << radius << "cm인 구 생성\n";
}


int main(void) {
    Sphere golfBall;
    Sphere basketBall(12);
    double area = golfBall.getArea();
    cout << "골프 공의 면적은 " << area << endl;
    area = basketBall.getArea();
    cout << "농구 공의 면적은 " << area << endl;

    Sphere * sp;
    sp = &golfBall;
    area = sp->getArea();
    cout << "골프 공의 면적은 " << area << endl;
    sp = &basketBall;
    area = sp->getArea();
    cout << "농구 공의 면적은 " << area << endl;

    return 0;
}