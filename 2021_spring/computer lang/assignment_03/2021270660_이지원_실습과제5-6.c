#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

int main() {
    // 양의 정수와 배수의 개수를 입력받아 정수의 배수를 구해서 출력하는 프로그램을 작성하시오(5장 연습문제 9번, for문 이용)
    // 입력 : 양의 정수 num, 배수의 개수 count
    // 출력 : 양의 정수의 배수 mul_num

    int num, count;

    printf("양의 정수와 배수의 개수를 입력해주세요 : ");
    scanf(" %d %d", &num, &count);

    if ( num <= 0 || count <= 0 ) {
        printf("잘못된 입력입니다. ");
        return 1;
    }

    // 정상적으로 양의 정수가 들어왔을 경우
    printf("%d의 배수 %d개 : ", num, count);
    for ( int i = 1 ; i <= count ; i++ ) {
        printf("%d ", num * i );
    }

    return 0;
}