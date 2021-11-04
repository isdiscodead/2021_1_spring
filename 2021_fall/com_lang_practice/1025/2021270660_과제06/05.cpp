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
    int size;
    Sphere *p;

    cout << "생성하고자 하는 구의 개수? >> ";
    cin >> size;

    if ( size <= 0 ) {
        cout << "개수는 양의 정수여야 합니다.";
        return 0;
    } 

    // 배열 동적 생성 
    p = new Sphere[size];
    if (!p) {
        cout << "동적 할당에 실패했습니다.";
        return 0;
    }

    int r;
    for( int i=0 ; i < size ; i++ ) {
        cout << "구 " << i+1 << " : ";
        cin >> r;
        if ( r <= 0 ) {
            cout << "반지름은 양의 정수여야 합니다.";
            exit(1);
        }
        p[i].setRadius(r);
    }

    for( int i=0 ; i < size ; i++ ) {
        cout << "구 " << i << " 의 겉넓이 = " << p[i].getArea() << endl;
    }

    int start = 100; 
    int end = 1000;
    int cnt = 0;
    for( int i=0 ; i < size ; i++ ) {
        if( p[i].getArea() >= start && p[i].getArea() <= end ) {
            cnt ++;
        }
    }

    cout << "\n면적이 " << start << "에서 " << end << " 사이인 구의 개수는 " << cnt;

    return 0;
}