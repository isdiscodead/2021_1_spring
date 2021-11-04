#include <iostream>

// std -> 표준 이름 공간 ( 모든 c++ 표준 라이브러리 들어있음 )
using namespace std;    // using namespace로 접두어 없이 사용 가능

double area( int r );

double area( int r ) {
    return 3.14 * r * r;
}

int main() {
    int n  = 3;
    char c = '#';
    cout << c << 5.5 << '-' << n << "hello" << true << endl;
    cout << "n + 5 = " << n + 5 << '\n';
    cout << "면적은 " << area(n);
}