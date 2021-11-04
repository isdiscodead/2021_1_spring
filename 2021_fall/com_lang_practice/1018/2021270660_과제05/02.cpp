#include <iostream>
using namespace std;

class Triangle {
public:
    int width = 0;
    int height = 0;
    double getArea() { return width * height / 2; }
};


int main(void) {
    Triangle tri;
    tri.width = 10;
    tri.height = 4;
    cout << "삼각형의 면적은 " << tri.getArea() << endl;
    return 0;
}