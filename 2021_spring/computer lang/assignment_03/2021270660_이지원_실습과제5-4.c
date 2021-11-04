#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

int main() {

    // 사용자로부터 양의 정수(num)을 입력받아, 1부터 num까지의 합(for문 사용), 1부터 num까지의 짝수의
    // 합(while문 사용), 1부터 num까지의 홀수의 합(do while 사용)을 구하는 프로그램을 작성하시오. 
    // 입력 : 양의 정수 num, 반복용 정수 변수 i
    // 출력 : 전체 합 full_sum, 짝수의 합 even_sum, 홀수의 합 odd_sum
    
    int num;
    int i = 1, full_sum = 0, even_sum = 0, odd_sum = 0;

    printf("양의 정수 입력: ");
    scanf("%d", &num);

    // 음수가 입력됐을 경우 계산을 진행하지 않는다.
    if ( num < 0 ) {
        printf("잘못된 입력입니다. ");
        return 1;
    } 


    // 1부터 num까지의 합 ( for문 )
    for ( i = 1 ; i <= num ; i++ ) {
        full_sum += i;
    }

    // 1부터 num까지 짝수의 합 ( while문 )
    // 2로 초기화 하고, += 2 하는 것이 더 효율적 !!
    i = 1; // i를 다시 초기화
    while ( i <= num ) {
        if ( i % 2 == 0 ) {
            even_sum += i;
        }
        i ++;
    }

    // 1부터 num까지 홀수의 합 ( do while문 )
    // 1로 초기화 하고, += 2 하는 것이 더 효율적 !!
    i = 1; // i를 다시 초기화
    do {    
        if ( i % 2 == 1 ) {
            odd_sum += i;
        }
        i++;
    } while ( i <= num ); 


    printf("1 ~ %d까지의 합: %d\n", num, full_sum );
    printf("1 ~ %d까지 짝수의 합: %d\n", num, even_sum );
    printf("1 ~ %d까지 홀수의 합: %d\n", num, odd_sum );
    
    return 0;
}