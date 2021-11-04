#include <stdio.h>  
#include <stdlib.h> // rand() 함수 사용을 위한 헤더 파일
#include <time.h>   // time() 함수 사용을 위한 헤더 파일
#pragma warning(disable:4996)
#pragma warning(disable:6031)

// 양의 정수를 전달받아 정수의 약수를 모두 구해 출력해주는 divisors() 함수를 정의하고, 
// 1~1000 사이의 정수 3개를 임의로 생성하여 해당 정수의 약수를 출력하는 프로그램을 작성하시오. 
// 정수의 약수 출력 시 divisors() 함수를 사용해야 한다. 

// divisors() 함수 선언
void divisors( int num );


// 메인 함수
int main() {
    int i, num;

    // rand() 함수 seed 값 설정 -> time() 함수 이용
    srand(time(NULL));

    // rand() 함수 호출
    for ( i = 0 ; i < 3 ; i++  ) {
        num = rand()%1000 + 1;
        divisors( num );
    }

    return 0;
}


// 함수 정의
void divisors( int num ) {
    int j;
    int count = 0;

    printf("%d의 약수: 1,", num);

    for ( j = 2 ; j <= num ; j++ ) {

        if ( num % j == 0 ) {
            count ++;
            printf("%4d, ", j );
        }
    }

    // i == num을 따로 경우를 나눌 필요 없이 \b를 이용해서 커서를 뒤로 두 칸 넘기면 ,를 지울 수 있다.
    printf("\b\b => 총 %d개 \n", count);
}
