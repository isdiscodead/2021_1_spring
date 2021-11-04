#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031) 

#define LEN 10

int main() {

    // 변수 선언
    int score[LEN];
    int i, j, temp;

    // 데이터 입력 받기
    for ( i=0 ; i < LEN ; i++ ) {
        printf("점수를 입력하세요 (%d) >> ", i+1);
        scanf(" %d", &score[i]);
    }

    // 정렬 전 데이터 출력 
    printf("정렬 전 : ");
    for ( i=0 ; i < LEN ; i++) {
        printf("%d ", score[i]);
    }

    // 정렬 시작
    for ( j=0 ; j < LEN-1 ; j++ ) {
        for ( i=j+1 ; i < LEN ; i++ ) {
            if ( score[j] < score[i] ) {
                temp = score[j];
                score[j] = score[i];
                score[i] = temp;
            }
        }  
    }

    // 정렬된 데이터 출력
    printf("\n========== 정렬 완료 =========\n");
    for ( i=0 ; i < LEN ; i++ ) {
        printf("%d등 : %d점 \n", i+1, score[i]);
    }

    return 0;
}