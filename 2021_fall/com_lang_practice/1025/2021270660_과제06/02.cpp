#include <iostream>
using namespace std;

#define PI 3.14
#define SIZE 5

class Sphere {
    int radius;

    public:
        Sphere();
        Sphere(int r);
        double getArea() { return 4 * PI * radius * radius; }
        void setRadius(int r) { this->radius = r; }
        int getRadius() { return this->radius; }
};


Sphere::Sphere() { 
    radius = 2; 
}

Sphere::Sphere(int r) { 
    radius = r; 
}


int main(void) {
    Sphere sphereArr[SIZE];

    int r = 2;
    for( int i=0 ; i < SIZE ; i++ ) {
        sphereArr[i].setRadius(r);
        r+=2;
    }

    for( int i=0 ; i < SIZE ; i++ ) {
        cout << "반지름 " << sphereArr[i].getRadius() << "cm인 Sphere " << i << " 의 면적 : " << sphereArr[i].getArea() << endl;
    }

    Sphere * p;
    p = sphereArr;

    for( int i=0 ; i < SIZE ; i++ ) {
        cout << "Sphere " << i << "의 면적 : " << p[i].getArea() << endl;
    }

    return 0;
}