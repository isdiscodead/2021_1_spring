#include <stdio.h>

#define SIZE 5

void print_arr( int arr[] ) {
    int i;
    for( i=0 ; i < SIZE ; i++ ) {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}

// 선택 정렬 : 주어진 배열 data의 정수 정보를 오름차순으로 정렬 후, 출력하시오.
int main() {
    int data[SIZE] = { 52, 31, 28, 17, 46 };
    int i, j, temp;
    int min_idx = 0;

    // 정렬 전 배열 출력
    printf("> 정렬 전 : ");
    print_arr(data);

    // 오름차순으로 정렬
    for ( i = 0 ; i < SIZE-1 ; i++ ) {
        min_idx = i;

        for ( j = i+1 ; j < SIZE ; j++ ) {
            if ( data[min_idx] > data[j] ) {
                min_idx = j;
            }
        }

        temp = data[i];
        data[i] = data[min_idx];
        data[min_idx] = temp;    
    }

    // 정렬 후 배열 출력
    printf("> 정렬 후 : ");
    print_arr(data);

    return 0;
}