#include <iostream>
using namespace std;

#define PI 3.14

class Sphere {
    int radius;

    public:
        Sphere() { this->radius = 2; }
        Sphere(int r) { this->radius = r; }
        Sphere(Sphere& sphere);
        double getArea() { return 4 * PI * radius * radius; }
        int getRadius() { return radius; }
        void setRadius(int r) { this->radius = r; }
};

Sphere::Sphere(Sphere& sphere) {
    this->radius = sphere.getRadius();
    cout << "복사 생성자 실행 radius = " << this->radius << endl;
}

int main(void) {
    Sphere golfBall;
    Sphere basketBall(12);

    Sphere copy1(golfBall);
    Sphere copy2(basketBall);

    cout << "golfBall   겉넓이 = " << golfBall.getArea() << endl;  
    cout << "copy1      겉넓이 = " << copy1.getArea() << endl;  
    cout << "basketBall 겉넓이 = " << basketBall.getArea() << endl;  
    cout << "copy2      겉넓이 = " << copy2.getArea() << endl;  

    return 0;
}