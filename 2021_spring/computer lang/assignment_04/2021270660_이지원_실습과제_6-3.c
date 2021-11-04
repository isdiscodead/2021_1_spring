#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

// 연도와 월을 전달받아 그 달의 날짜수를 리턴하는 GetDaysOfMonth() 함수를 정의하고, 
// 이 함수를 이용하여 입력받은 년도의 해당 월의 날짜 수를 출력하는 프로그램을 작성하시오.
// 1, 3, 5, 7, 8, 10, 12월은 31일이고, 2, 4, 6, 9, 11월은 30일이다.
// 단, 2월은 윤년이면 29일, 윤년이 아니면 28일이다. 
// 윤년 여부는 Q2번에서 작성한 isLeapYear() 함수를 사용하여 판별한다.  


// 함수 선언
int isLeapYear( int year ); 
int getDaysOfMonth( int year, int month );


// 메인 함수
int main() {
    int year, month;

    printf("연도와 월을 입력하세요 : ");
    scanf("%d %d", &year, &month);

    printf("%d년 %d월은 %d일입니다. ", year, month, getDaysOfMonth(year, month) );

    return 0;
}


// 윤년 판별 함수 정의
int isLeapYear( int year ) {
    
    if ( (year % 4 == 0) && (year % 100 != 0) ) {
        return 1;

    } else if ( year % 400 == 0 ) {
        return 1;

    } else {
        return 0;
    }
}


// 날짜 수 함수 정의
int getDaysOfMonth( int year, int month ) {
    switch (month) {
        case 4 :
        case 6 :
        case 9 :
        case 11 :
            return 30;

        case 2 :
            if ( isLeapYear(year) ) {
                return 29;
            } else {
                return 28;
            }

            // if문 대신 return isLeapYear( year ) + 28 ; 로 사용 가능 !!

        default:
            return 31;
    }
}