#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031) 

#define SIZE 4

void arrSum(int* pX, int* pY, int *pZ, int size);
void arrPrint(int *arr, int size);

// 함수를 이용하여, arrX와 arrY의 각 요소를 더하여 arrZ 배열에 할당하고 출력하시오.
// [참조] 배열 출력 전용 함수를 추가하여, 각 배열의 요소를 출력합니다

int main() {
    int arrX[SIZE] = { -2, 4, 6, -32};
    int arrY[SIZE] = { 4, 3, -5, 6};
    int arrZ[SIZE] = {0};

    arrSum( arrX, arrY, arrZ, SIZE ); 

    printf("arrX:");
    arrPrint( arrX, SIZE );
    printf("arrY:");
    arrPrint( arrY, SIZE );
    printf("arrZ:");
    arrPrint( arrZ, SIZE );

    return 0;
}

void arrSum(int* pX, int* pY, int *pZ, int size) {
    int i;

    for ( i=0 ; i < size ; i++ ) {
        pZ[i] = pX[i] + pY[i];
    }
}

void arrPrint(int *arr, int size) { 
    int i;

    for ( i=0 ; i < size ; i++ ) {
        printf(" %d ", arr[i]);
    }

    printf("\n");
}