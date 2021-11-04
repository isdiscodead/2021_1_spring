#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

// 화씨 온도를 입력 받아 섭씨 온도로 변환해서 출력하는 프로그램

int main(void) {
    // 화씨 온도는 fTem, 섭씨 온도는 cTem으로 변수 선언
    double fTem, cTem; 

    // 화씨 온도를 콘솔로 입력받는다. 
    printf("화씨 온도? ");
    scanf(" %lf", &fTem);

    // 주어진 공식을 사용해 화씨 온도를 섭씨 온도로 변환
    cTem = ( fTem - 32 ) * ( 5.0 / 9.0 );

    // 결과 출,력
    printf("%.0f F = %.2f C", fTem, cTem);   
}

