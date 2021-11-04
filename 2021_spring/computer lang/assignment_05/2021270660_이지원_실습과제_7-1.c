#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

#define LEN 12

/* Compute the check digit for a UPC */ 

int main() {
    int dig[LEN];
    int sum = 0;
    int i; 

    // 배열 입력 받는 부분
    printf("please enter the first eleven UPC digits, separated by white space : \n");
    for ( i=0 ; i < LEN - 1 ; i++ ) {
        scanf("%1d", &dig[i]); 
    }

    // 입력 받은 배열 출력
    for ( i=0 ; i < LEN - 1 ; i++ ) {
        printf("%d", dig[i]);
    }
    printf("\n");

    // sum 계산 
    for ( i=0 ; i < LEN - 1 ; i++ ) {
        if ( i % 2 == 0 ) {
            // i가 0부터 시작이므로 나머지가 0일 때 홀수가 된다. 
            sum += ( dig[i] * 3 );
        } else {
            sum += dig[i];
        }   
    }

    // 체크 숫자 생성
    dig[11] = ( 10 - sum % 10 ) % 10;
    printf("The check digit is %d \n", dig[11]);

    return 0;
}