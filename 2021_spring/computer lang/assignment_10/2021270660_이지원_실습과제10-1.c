#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

#define MAX_STD 5

// 구조체 정의
struct student {
    char name[20];
    int korean, english, math;
    double average;
};

int main(void) {
    struct student std[MAX_STD];
    int i;
    double total_average = 0;

    printf("%d 명의 학생 정보를 입력하세요.\n", MAX_STD);

    for (i = 0; i < MAX_STD; i++) {      // 학생 정보 입력 및 평균 계산
        // 값 담기 
        printf("이름: ");
        // scanf(" %s", std[i].name );
        gets_s( std[i].name , sizeof(std[i].name));

        printf("국어, 영어, 수학 점수 : ");
        scanf("%d %d %d", &std[i].korean, &std[i].english, &std[i].math);

        getchar();  // 버퍼 비우기 ( 제 콘솔에서는 자꾸 먹혀서 추가했습니다. )
        // 버퍼 전체 비우기
        // char ch;
        // while ((ch = getchar()) != '\n' );

        std[i].average = ( std[i].korean + std[i].english + std[i].math ) / 3.0;

        // 전체 평균 점수에 추가
        total_average += std[i].average;
    }

    total_average /= MAX_STD;           // 전체 평균 계산

    printf("\n이름       국어 영어 수학 평균\n"); // 학생 정보 출력(실행 예 참고)
    for ( i = 0 ; i < MAX_STD ; i++ ) {
        printf("%-14s%4d %4d %4d %6.2f\n", std[i].name, std[i].korean, std[i].english, std[i].math, std[i].average);
    }

    printf("전체 평균 : %6.2f\n", total_average);

    return 0;
}

