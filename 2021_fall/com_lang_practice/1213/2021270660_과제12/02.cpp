#include <iostream>
using namespace std;


int main(void) { 
    int a[3];
    int max; 

    cout << "3개의 정수를 입력하시오 >>";
    cin >> a[0] >> a[1] >> a[2];

    if ( a > b && a > c ) {
        max = a;
    } else if ( b > a && b > c ) {
        max = b;
    } else if ( c > a && c > b ) {
        max = c;
    } else {
        cout << "같은 수가 존재합니다.\n";
        return 0;
    }

    cout << "가장 큰 정수는 " << max << endl;
    
    return 0;
}