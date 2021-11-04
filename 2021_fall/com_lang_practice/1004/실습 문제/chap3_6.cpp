#include <iostream>
using namespace std;

#define ARR_SIZE 10

int main() {
    int arr[ARR_SIZE] = { 0 };

    cout << "정수 10개를 차례대로 입력하시오 >> ";
    for( int i=0 ; i < ARR_SIZE ; i++ ) {
        cin >> arr[i];
    }

    cout << "배열 : ";
    for( int i=0 ; i < ARR_SIZE ; i++ ) {
        cout << arr[i];
    }
    cout << endl;

    // 최대값, 최소값 
    int max_idx = 0;
    int min_idx = 0;

    for ( int i=0 ; i < ARR_SIZE ; i++ ) {
        if ( arr[max_idx] < arr[i] ) {
            max_idx = i;
        }
        if ( arr[min_idx] > arr[i] ) {
            min_idx = i;
        }
    }

    cout << "최대값 : " << "인덱스=" << max_idx << ",값=" << arr[max_idx] << endl;
    cout << "최소값 : " << "인덱스=" << min_idx << ",값=" << arr[min_idx] << endl;

    return 0;
}