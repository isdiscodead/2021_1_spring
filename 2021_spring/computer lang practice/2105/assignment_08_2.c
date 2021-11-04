#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

#define LEN 7

// 크기가 7인 정수 배열을 선언한 후, 7개의 정수 정보를 입력 받는다. 
// 배열에서 가장 큰 값과 작은 값을 찾은 후 해당 결과를 출력하시오.

int main() {
    // 변수 선언
    int data[LEN];
    int min, max, i;

    // 데이터 입력
    for ( i=0 ; i < LEN ; i++ ) {
        printf("Input data (%d) >> ", i+1 );
        scanf("%d", &data[i]);
    }

    // 입력 받은 데이터 출력
    for ( i=0 ; i < LEN ; i++ ) {
        printf("%d ", data[i]);
    }
    printf("\n");

    // 최댓값, 최솟값 구하기 
    // 먼저 data[0]을 최댓값이자 최솟값으로 지정한다. 
    min = data[0];
    max = data[0];

    for ( i=0 ; i < LEN ; i++ ) {
        if ( min > data[i] ) {
            min = data[i];
        }
        if ( max < data[i] ) {
            max = data[i];
        }
    }

    // 결과 출력
    printf("-> MAX: %d \n-> MIN: %d", max, min);

    return 0;
}