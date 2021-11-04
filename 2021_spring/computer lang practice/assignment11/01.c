#include <stdio.h>

// 함수 선언
void sort( int arr[], int size );
void printArr( int arr[], int size );
double mid( int arr[], int size ); 

int main() {
    int vOne[] = { 15, 18, 10, 4, 27 };
    int vTwo[] = { 2, -4, 6, 9, 21, 44};

    sort(vOne, sizeof(vOne)/sizeof(int));   
    sort(vTwo, sizeof(vTwo)/sizeof(int));

    printf("vOne 배열의 중위수 : %.1f\n", mid(vOne, sizeof(vOne)/sizeof(int)));
    printf("vTwo 배열의 중위수 : %.1f\n", mid(vTwo, sizeof(vTwo)/sizeof(int)));

    return 0;
}

// 선택 정렬 함수 
void sort( int arr[], int size ) {
    int i, j, min_idx, tmp;
    for( i=0 ; i < size-1 ; i++ ) {
        min_idx = i;
        for( j=i+1 ; j < size ; j++ ) {
            if( arr[j] < arr[min_idx] ) {
                min_idx = j;
            }
        }
        tmp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = tmp;
    }
}

// 배열 출력
void printArr( int arr[], int size ) {
    int i;
    for( i=0 ; i < size ; i++ ) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 중위수 찾기 함수
double mid( int arr[], int size ) {
    int idx;

    if( size % 2 == 0 ) {
        idx = size / 2;
        return ( arr[idx-1] + arr[idx] ) / 2.0;
    } else {
        idx = (size+1) / 2 - 1;
        return (double)arr[idx];
    }
}