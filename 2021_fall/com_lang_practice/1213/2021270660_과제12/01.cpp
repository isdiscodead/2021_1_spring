#include <iostream>
using namespace std;

#define PI 3.14

int main(void) {
    double radius;
    cout << "반지름>>";
    cin >> radius;

    area = PI * radius * radius * 4 ;
    volume = PI * radius * radius * radius * 4 / 3.0;

    cout << "구의 표면적: " << area << endl;
    cout << "구의 부피: " << volume << endl;

    return 0;
}