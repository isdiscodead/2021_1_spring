#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

#define SIZE 10

// 크기가 10인 정수형 배열을 등차 수열이 되도록 값을 대입하고, 출력하는 프로그램을 작성하시오. (연습문제 7장 1번)

int main() {
    // 변수 선언
    int arr[SIZE];
    int first, diff, i;    // 첫 항과 공차 

    // 변수 입력
    printf("첫 번째 항? ");
    scanf(" %d", &first);
    printf("공차? ");
    scanf(" %d", &diff);

    // 수열 채우기
    arr[0] = first; // 원래는 입력 받을 때 &arr[0]으로 받는다. 
    for( i=1 ; i < SIZE ; i++ ) {
        // arr[i] = first + ( diff*i );
        arr[i] = arr[i-1] + diff;   // 덧셈 연산만 하는 게 더 효율적이지 않을까
    }

    // 배열 출력
    printf("등차 수열: ");
    for ( i=0 ; i < SIZE ; i++ ) {
        printf("%d ", arr[i]);
    }

    return 0;
}