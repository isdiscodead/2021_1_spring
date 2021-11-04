#include <iostream>
using namespace std;

#define PI 3.14
#define SIZE 5

class Sphere {
    int radius;

    public:
        Sphere();
        Sphere(int r);
        ~Sphere();
        double getArea() { return 4 * PI * radius * radius; }
        void setRadius(int r) { this->radius = r; }
        int getRadius() { return this->radius; }
};


Sphere::Sphere() { 
    radius = 2; 
    cout << "반지름이 " << radius << "cm인 구 생성\n";
}

Sphere::Sphere(int r) { 
    radius = r; 
    cout << "반지름이 " << radius << "cm인 구 생성\n";
}

Sphere::~Sphere() {
    cout << "반지름이 " << radius << "cm인 구 소멸\n";
}

int main(void) {
    Sphere * p;
    int r;

    while(true) {
        cout << "정수 반지름 입력(음수이면 종료) >>";
        cin >> r;
        if ( r <= 0 ) {
            break;
        }

        p = new Sphere(r);
        if(!p) {
            cout << "동적 할당에 실패했습니다.\n";
            return 0; 
        }

        cout << "구의 면적은 " << p->getArea() << " 제곱 센티미터\n";

        delete p;
    }
    
    return 0;
}