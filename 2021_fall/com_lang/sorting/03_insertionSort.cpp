#include <iostream>
using namespace std;

// 삽입 정렬 : 자료 배열의 모든 요소를 앞에서부터 차례대로 이미 정렬된 배열 부분과 비교 하여, 
// 자신의 위치를 찾아 삽입함으로써 정렬을 완성하는 알고리즘 -> 2번째 인덱스부터 시작

// 오름차순
template <class T>
void insertionSort(T arr[], int size) {
    int i, j;
    T key;
    for( i=1 ; i < size ; i++ ) {
        key = arr[i];
        for ( j=i-1 ; j>=0 && arr[j]>key ; j-- ) {
            // j>=0이고, arr[j]가 비교하고자 하는 key보다 같거나 작아지기 전까지 오른쪽으로 밀어 자리 만듦
            arr[j+1] = arr[j];    
        }
        arr[j+1] = key;
    }
}

// 내림차순
template <class T>
void insertionSort2(T arr[], int size) {
    int i, j;
    T key;
    for( i=1 ; i < size ; i++ ) {
        key = arr[i];
        for ( j=i-1 ; j>=0 && arr[j]<key ; j-- ) {
            // j>=0이고, arr[j]가 비교하고자 하는 key보다 같거나 커지기 전까지 오른쪽으로 밀어 자리 만듦
            arr[j+1] = arr[j];    
        }
        arr[j+1] = key;
    }
}

int main(void) {
    int arrSize = 5;
    int arrInt[5] = {1, 3, 6, 2, -10};
    double arrDub[5] = {4.2, 3.40, -0.4, -6.5, 2.03};

    insertionSort(arrInt, arrSize);
    insertionSort2(arrDub, arrSize);

    for( int i = 0; i < arrSize ; i++ ) {
        cout << arrInt[i] << " ";
    }
    cout << endl;
    for( int i = 0; i < arrSize ; i++ ) {
        cout << arrDub[i] << " ";
    }
}