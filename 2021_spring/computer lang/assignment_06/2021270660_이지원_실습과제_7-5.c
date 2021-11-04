#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

#define ROW 4
#define COL 5

// 3행 4열의 2차원 정수 배열을 다음과 같이 초기화하고, 각 행과 열의 합, 총합을 구하여 
// 다음과 같이 출력하는 프로그램을 작성하시오. ( 4행 5열의 2차원 배열로 선언, 행과 열의 합은 각각 계산 )

int main() {
    // 변수 선언
    int arr[ROW][COL] = { {5, 7, 4, 3}, {6, 1, 8, 3}, {3, 2, 7, 6} };
    int i, j;
    
    // 행의 합 구하기
    for ( i=0 ; i < ROW-1 ; i++ ) {
        for ( j=0 ; j < COL-1 ; j++ ) {
            arr[ROW-1][j] += arr[i][j]; 
        }
    }

    // 열의 합 구하기 
    for ( i=0 ; i < ROW ; i++ ) {
        for ( j=0 ; j < COL-1 ; j++ ) {
            arr[i][COL-1] += arr[i][j];
        }
    }
            
    // 결과 출력 
    for ( i=0 ; i < ROW-1 ; i++ ) {
        for ( j=0 ; j < COL-1 ; j++ ) {
            printf("%2d ", arr[i][j]);
        }
        printf(": %d \n", arr[i][COL-1]);
    }

    // 합산 부분 출력
    printf("-----------------\n");
    for ( j=0 ; j < COL-1 ; j++ ) {
        printf("%d ", arr[ROW-1][j]);
    }
    printf(": %d \n", arr[i][COL-1]);
            
    return 0;
}