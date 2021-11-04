#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

// 임의의 정수를 입력 받아서, 0부터 정수까지의 합을 구하는 getSum( ) 함수를 작성하고, 코드를 완성하시오.
int getSum(int num);

int main() {
    int num;
    
    printf("enter value >> ");
    scanf("%d", &num);

    printf("sum(%d) = %d", num, getSum(num) );

    return 0;
}

// 함수 정의
int getSum( int num ) {
    int i;
    int sum = 0;

    if( num > 0 ) {
        for ( i=0 ; i <= num ; i++ ) {
            sum += i;
        }
    } else {
        for ( i=0 ; i >= num ; i-- ) {
            sum += i;
        }
    }

    return sum;
}

