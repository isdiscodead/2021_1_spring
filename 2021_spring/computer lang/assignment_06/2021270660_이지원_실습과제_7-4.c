#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

#define SIZE 10

// 원소의 개수가 10개인 1차원 정수 배열에 임의의 값을 입력받아 
// 최대값과 최소값을 구하여 출력하는 프로그램을 작성하시오 (7장 연습문제 3번 변형).
// 최대값, 최소값의 초기화에 유의하고 정렬 X 

int main() {
    // 변수 선언
    int data[SIZE];
    int min, max, i;

    // 데이터 입력
    printf("정수 10개 입력: ");
    for ( i=0 ; i < SIZE ; i++ ) {
        scanf(" %d", &data[i]);
    }

    // 최댓값, 최솟값 구하기 
    // 먼저 data[0]을 최댓값이자 최솟값으로 지정한다. 
    min = data[0];
    max = data[0];

    for ( i=0 ; i < SIZE ; i++ ) {
        if ( min > data[i] ) {
            min = data[i];
        } else if ( max < data[i] ) {
            max = data[i];
        }
    }

    // 결과 출력
    printf("최대값 : %d \n최소값 : %d", max, min);

    return 0;
}