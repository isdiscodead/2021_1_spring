#include <iostream>
using namespace std;

#define SIZE 5

int main(void) {
    int arr[SIZE];

    cout << "숫자를 입력하세요 :";
    for( int i=0 ; i<SIZE ; i++ ) {
        cin >> arr[i];
    }

    // 최대값 찾기
    int max = arr[0];
    for( int i=0 ; i<SIZE ; i++ ) {
        if ( max < arr[i] ) {
            max = arr[i];
        }
    }

    cout << "가장 큰 수는" << max << "입니다.";
    
    return 0;
}