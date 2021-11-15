#include <iostream>
using namespace std;

#define PI 3.14


class Sphere {
    int radius;

    public:
        static int numOfSpheres;
        static int getNumOfSpheres() {
            return numOfSpheres;
        }

        ~Sphere() { numOfSpheres--; }
        Sphere(int r=2) { 
            this->radius = r;
            numOfSpheres++;
        }
        Sphere(Sphere& sphere);
        double getArea() { return 4 * PI * radius * radius; }
        int getRadius() { return radius; }
        void setRadius(int r) { this->radius = r; }
};


Sphere::Sphere(Sphere& sphere) {
    this->radius = sphere.getRadius();
    cout << "복사 생성자 실행 radius = " << this->radius << endl;
}

int Sphere::numOfSpheres = 0;


int main(void) {
    Sphere golfBall;
    cout << "현재 구의 개수 = " << Sphere::getNumOfSpheres() << endl;

    Sphere basketBall(12);
    cout << "현재 구의 개수 = " << Sphere::getNumOfSpheres() << endl;

    Sphere superBall(100);
    cout << "현재 구의 개수 = " << Sphere::getNumOfSpheres() << endl;

    Sphere*p = new Sphere[100];
    cout << "현재 구의 개수 = " << Sphere::getNumOfSpheres() << endl;

    delete [] p;
    cout << "현재 구의 개수 = " << Sphere::getNumOfSpheres() << endl;

    return 0;
}