#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

// 1) 시간, 분, 초를 입력 받아 초로 환산
// 2) 초를 입력받아 시간, 분, 초로 환산

// 문제에서 제시한 기호 상수 초기화
#define SEC_PER_HOUR 3600
#define SEC_PER_MIN 60

int main(void) {
    // 시간, 분, 초, 전체 초 변수 int로 선언
    // 계산할 때 사용할 rem_sec을 추가로 선언 ( 남은 초 )
    int hour, min, sec, tot_sec, rem_sec; 
    
    // ============================= 1번 ==================================

    // 시간을 차례로 콘솔에 입력받는다. 
    printf("시간을 차례로 입력하세요 ( 시, 분, 초 ) : ");
    scanf(" %d %d %d", &hour, &min, &sec);

    // 전체 초를 계산하여 구해주고, 출력한다. 
    tot_sec = ( hour * SEC_PER_HOUR ) + ( min * SEC_PER_MIN ) + sec; 
    printf("%d시간 %d분 %d초는 총 %d초입니다. \n", hour, min, sec, tot_sec);

    // ============================= 2번 ==================================
    printf("\n-----------------------------\n"); // 구분줄

    // 환산할 전체 초를 입력 받는다.
    printf("환산할 초를 입력하세요 : ");
    scanf(" %d", &tot_sec);

    // 나머지 초에 전체 초를 대입한다.
    rem_sec = tot_sec;

    // 계산 후 결과 출력
    hour = rem_sec / SEC_PER_HOUR ;
    rem_sec %= SEC_PER_HOUR; 
    min = rem_sec / SEC_PER_MIN;
    rem_sec %= SEC_PER_MIN;
    sec = rem_sec;

    printf("%d초는 %d시간 %d분 %d초입니다.", tot_sec, hour, min, sec);
}

