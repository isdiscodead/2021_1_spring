#include <iostream>
using namespace std;

int main(void) {
    int size;
    int *arr;
    cout << "입력할 정수의 개수?";
    cin >> size;

    try {
        arr = new int[size];
    } catch ( bad_alloc ) {
        cout << "동적 할당에 실패했습니다.";
        return 1;
    }

    cout << "정수를 입력하시오\n";
    for (int i=0 ; i < size ; i++ ) {
        cout << i+1 << "번째 : ";
        cin >> arr[i]; 
    }


    int sum = 0;
    for (int i=0 ; i < size ; i++ ) {
        sum += arr[i]; 
    }

    int avg;
    avg = sum / double(size);

    cout << "입력된 정수는 >> ";
    for (int i=0 ; i < size ; i++ ) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "합계 = " << sum << endl;
    cout << "평균 = " << avg << endl;

    return 0;
}