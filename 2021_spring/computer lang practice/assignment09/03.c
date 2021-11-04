#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031) 

#define SIZE 10

// 포인터를 이용해 배열의 인덱스와 크기, 바꿀 값을 입력받아 배열의 내용을 바꾸는 함수 
void arrUpdate( int *arr, int value, int new_value, int size );
void arrPrint(int *arr, int size);

int main() {
    int arr[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    arrPrint(arr, SIZE);
    arrUpdate( arr, 4, 16, SIZE );
    arrPrint(arr, SIZE);

    return 0;
}

void arrUpdate( int *arr, int value, int new_value, int size ) {
    // 기존 value의 인덱스 검색하여 값 바꿔주기
    int i;
    for ( i=0 ; i < size ; i++ ) {
        if ( arr[i] == value ) {
            arr[i] = new_value;
        }
    }
}

void arrPrint(int *arr, int size) { 
    int i;
    for ( i=0 ; i < size ; i++ ) {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}