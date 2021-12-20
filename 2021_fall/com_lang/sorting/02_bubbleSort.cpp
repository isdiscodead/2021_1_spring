#include <iostream>
using namespace std;

// 버블 정렬 : 인접한 2개의 레코드를 비교하여 크기가 순서대로 되어 있지 않으면 서로 교환한다.
// 앞에서부터 2개씩 쭈르르륵 비교... 가장 뒤부터 정렬된다. 

// 오름차순
template <class T>
void bubbleSort(T arr[], int size) {
    for( int i=size-1 ; i >= 0 ; i-- ) {
        for ( int j=0 ; j < i ; j++ ) {
            if ( arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

// 내림차순
template <class T>
void bubbleSort2(T arr[], int size) {
    for( int i=size-1 ; i >= 0 ; i-- ) {
        for ( int j=0 ; j < i ; j++ ) {
            if ( arr[j] < arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}


int main(void) {
    int arrSize = 5;
    int arrInt[5] = {1, 3, 6, 2, -10};
    double arrDub[5] = {4.2, 3.40, -0.4, -6.5, 2.03};

    bubbleSort(arrInt, arrSize);
    bubbleSort2(arrDub, arrSize);

    for( int i = 0; i < arrSize ; i++ ) {
        cout << arrInt[i] << " ";
    }
    cout << endl;
    for( int i = 0; i < arrSize ; i++ ) {
        cout << arrDub[i] << " ";
    }
}