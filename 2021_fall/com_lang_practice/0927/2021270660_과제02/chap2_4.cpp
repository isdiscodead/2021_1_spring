#include <iostream>

// std -> 표준 이름 공간 ( 모든 c++ 표준 라이브러리 들어있음 )
using namespace std;    // using namespace로 접두어 없이 사용 가능

double area( int r );

double area( int r ) {
    return 3.14 * r * r;
}

int main() {   
    char str[100];

    int a = 0;
    int b = 0;
    int c = 0;
    int x = 0;
    int y = 0;
    int z = 0;

    cout << "⭐️ 영문자 알파벳 빈도 수 분석 ⭐️" << endl << "영어 소문자를 입력하세요 ( 100자 미만 )\n";
    cin.getline( str, 100, '\n');

    for ( int i = 0 ; str[i] ; i++ ) {
        if ( str[i] == 'a' ) a++;
        if ( str[i] == 'b' ) b++;
        if ( str[i] == 'c' ) c++;
        if ( str[i] == 'x' ) x++;
        if ( str[i] == 'y' ) y++;
        if ( str[i] == 'z' ) z++;
    }

    cout << "a의 개수는 " << a << endl;
    cout << "b의 개수는 " << b << endl;
    cout << "c의 개수는 " << c << endl;
    cout << "x의 개수는 " << x << endl;
    cout << "y의 개수는 " << y << endl;
    cout << "z의 개수는 " << z << endl;
}