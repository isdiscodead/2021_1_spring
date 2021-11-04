#include <iostream>
using namespace std;

#define SIZE 5

int main(void) {
    int arr[SIZE];
    int minIdx, temp; 

    cout << "숫자 "<< SIZE <<"개를 입력하세요 : ";
    for( int i=0 ; i<SIZE ; i++ ) {
        cin >> arr[i];
    }

    // 출력 
    cout << "original\n";
    for( int i=0 ; i<SIZE ; i++ ) {
        cout << arr[i] << " ";
    }

    // 선택 정렬 : 최소값 찾아 맨 앞의 값과 교체
    for( int i=0 ; i<SIZE-1 ; i++ ) {
        minIdx = i;
        for( int j=i+1; j<SIZE ; j++ ) {
            if(arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[minIdx]; 
        arr[minIdx] = temp;
    }

    // 출력 
    cout << "\nAfter selection sort\n";
    for( int i=0 ; i<SIZE ; i++ ) {
        cout << arr[i] << " ";
    }

    return 0;
}