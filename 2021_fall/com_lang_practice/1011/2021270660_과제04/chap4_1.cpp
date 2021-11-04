#include <iostream>
using namespace std;

#define PI 3.14

void getArea(int radius) {
    cout << radius * radius * PI << endl;
}

int main(void) {
    int radius = -1;
    
    while( radius < 0 ) {    
        cout << "반지름을 입력하세요>>";
        cin >> radius;
    }

    getArea(radius);

    return 0;
}