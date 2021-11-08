#include <iostream>
using namespace std;

#define PI 3.14

class Sphere {
    int radius;

    public:
        Sphere();
        Sphere(int r);
        ~Sphere() { cout << "소멸자 실행 radius = " << radius << endl; }
        double getArea() { return 4 * PI * radius * radius; }
        int getRadius() { return radius; }
        void setRadius(int r) { this->radius = r; }
};



Sphere::Sphere() { 
    this->radius = 2; 
    cout << "생성자 실행 radius = " << this->radius << "\n";
}

Sphere::Sphere(int r) { 
    this->radius = r; 
    cout << "생성자 실행 radius = " << this->radius << "\n";
}

void doubleRadius(Sphere &ball) {
    ball.setRadius( ball.getRadius() * 2 );
}


int main(void) {
    Sphere footBall(15);
    cout << "반지름 = " << footBall.getRadius() << " 겉넓이 = " << footBall.getArea() << endl;
    
    // 참조에 의한 호출
    doubleRadius(footBall);
    cout << "반지름 = " << footBall.getRadius() << " 겉넓이 = " << footBall.getArea() << endl;

    return 0;
}
