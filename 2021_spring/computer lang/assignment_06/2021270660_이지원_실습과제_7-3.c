#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

#define SIZE 5

// 교재의 [예제7-11]의 선택정렬을 오름차순으로 정렬하되, 최대값을 찾아 제자리를 찾는 방식으로 변경하시오.

int main() {
    // 변수 선언
    int data[SIZE] = { 52, 31, 28, 17, 46 };
    int i, j, k, temp, max_idx ;

    // 선택 정렬
    for ( i=SIZE-1 ; i > 0 ; i-- ) {
        
        max_idx = i;

        for ( j = i-1 ; j >= 0 ; j-- ) {

            if ( data[max_idx] < data[j] ) { 
                max_idx = j;
            }

            if ( max_idx != i ) {
                temp = data[max_idx];
                data[max_idx] = data[i];
                data[i] = temp;
            }
        }

        // 결과 출력
        printf("i = %d일 때 정렬 결과 : ", i);
        for ( k=0; k<SIZE ; k++ ) {
            printf("%d ", data[k]);
        }
        printf("\n");
        
    }   

    return 0;
}
