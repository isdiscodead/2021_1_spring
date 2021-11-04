#include <iostream>
using namespace std;

int max_int( int *p, int size ) {
    int max = p[0];
    for(int i = 1 ; i < size ; i++ ) {
        if( max < p[i] ) {
            max = p[i];
        }
    }
    return max;
}

int min_int( int *p, int size ) {
    int min = p[0];
    for(int i = 1 ; i < size ; i++ ) {
        if( min > p[i] ) {
            min = p[i];
        }
    }
    return min;
}

int main(void) {
    int size;
    cout << "입력할 정수의 개수는? >> ";
    cin >> size;
    if ( size <= 0 ) {
        cout << "크기는 양의 정수여야 합니다.\n";
        return 0;
    }

    int * numArr = new int[size];
    if(!numArr) {
        cout << "동적 할당에 실패했습니다.\n";
        return 0;
    }

    for(int i=0 ; i < size ; i++ ) {
        cout << i+1 << "번째 정수 : ";
        cin >> numArr[i];
    }

    cout << "입력한 숫자들 = ";
    for(int i=0; i < size ; i++ ) {
        cout << numArr[i] << " ";
    }
    cout << endl;

    cout << "가장 큰 수는 " << max_int(numArr, size) << " 입니다.\n";
    cout << "가장 작은 수는 " << min_int(numArr, size) << " 입니다.\n";

    return 0;
}