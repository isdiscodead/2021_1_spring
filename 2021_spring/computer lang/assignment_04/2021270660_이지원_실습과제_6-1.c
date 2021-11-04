#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

// 실수를 전달받아 소수 첫째 자리에서 반올림한 정수값을 리턴하는 round() 함수를 정의하시오. 
// round() 함수를 이용하여 다음과 같이 0.0이 입력될 때까지 반올림을 계산하여 출력해주는 프로그램을 작성하시오. 

// 함수 선언
int round_1( double num );


// main() 함수
int main() {

    double num;
    
    // while문을 이용해서 0.0이 입력될 때까지 계산
    while ( 1 ) {
        printf("실수를 입력하세요 ( 0.0 입력 시 종료 ) : ");
        scanf("%lf", &num);

        // 종료 조건 검사
        if ( num == 0.0 ) {
            break;
        }

        printf("%f의 반올림 결과 = %d\n", num, round_1(num));
    }
    
    return 0;
}


// 함수 정의
int round_1( double num ) {

    int result; // 반올림 결과
    
    if ( num >= 0 ) {
        return ( num + 0.5 );
    } else {
        return ( num - 0.5 );
    }

    // 와 또또카다 . .
}