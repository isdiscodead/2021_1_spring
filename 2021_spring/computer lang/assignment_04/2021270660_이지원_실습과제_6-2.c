#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

// 연도를 전달받아 윤년 여부를 판별하는 isLeapYear() 함수를 정의하시오. 
// 이 함수를 이용해서 2000년부터 2150년 사이에 있는 모든 윤년을 출력하는 프로그램을 작성하시오. 
// 윤년 출력 시 한 줄에 10개씩 출력할 것

// 함수 선언
int isLeapYear( int year ); 


// main() 함수
int main() {
    int i, j;
    int count = 0;

    printf("--------------------------------------------------\n");
    printf("                2000~2150 사이의 윤년                  \n");
    printf("--------------------------------------------------\n");

    for ( i = 2000 ; i < 2150 ; i++ ) {

        if ( isLeapYear(i) ) {
            printf("%d ", i);
            count ++;

            // 10개씩 출력하고 줄바꿈
            if ( !(count % 10) ) {
            printf("\n");
            }
        }
    }

    return 0;
}


// 함수 정의
int isLeapYear( int year ) {
    
    if ( (year % 4 == 0) && (year % 100 != 0) ) {
        return 1;

    } else if ( year % 400 == 0 ) {
        return 1;

    } else {
        return 0;
    }

    // return ( ( year % 4 == 0 ) && ( year % 100 != 0 ) || ( year & 400 == 0 ) );
    // 위의 코드와 동일함 ! 실제로는 이렇게 쓰는 게 더 선호된다고 한다... 
}

