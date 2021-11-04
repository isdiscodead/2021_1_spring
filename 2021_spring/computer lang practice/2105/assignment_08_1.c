#include <stdio.h>
#include <math.h>   // sqrt() 함수 사용을 위한 라이브러리
#pragma warning(disable:4996)
#pragma warning(disable:6031) 

#define LEN 10 

int main() {
    // 배열 크기가 10인 1차원 실수 배열을 선언한 후, 10개의 데이터를 입력받는다. 
    // 배열에 저장된 데이터들의 평균(ave)과 표준편차(stdDev)를 구하시오. 

    // 변수 선언
    double data[LEN];
    int i;
    double ave, stdDev;
    double sum = 0;

    // 데이터 입력 받기
    for( i = 0 ; i < LEN ; i++ ) {
        printf("Input data (%d)>> ", i+1);
        scanf("%lf", &data[i]);
    }

    // 입력받은 배열의 내용 출력
    printf("배열의 내용: ");
    for( i = 0 ; i < LEN ; i++ ) {
        printf(" %.1f ",data[i]);
    }
    printf("\n");

    // 단순 총합과 평균 계산
    for ( i=0 ; i < LEN ; i++ ) {
        sum += data[i];
    }

    ave = ( sum ) / LEN;

    // 편차 제곱의 합과 표준 편차 계산
    sum = 0; 
    for ( i=0 ; i < LEN ; i++ ) {
        sum += ( data[i] - ave ) * ( data[i] - ave );
    }

    stdDev = sqrt( sum / LEN );

    // 결과 출력
    printf("-> Ave: %.2f \n-> Standard Deviation: %.2f", ave, stdDev);

    return 0;
}