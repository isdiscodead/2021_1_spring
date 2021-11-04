#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

// 입력받은 문자열의 소문자/대문자 개수를 출력하시오.

int main() {
    // 변수 선언
    char str[100];
    int upCount = 0, lowCount = 0;

    // 문자열 입력
    printf("input str : ");
    gets(str);

    // 소문자 대문자 개수 세기
    for ( int i = 0; str[i] ; i++ ) {
        if ( 'a' <= str[i] && str[i] <= 'z' ) {
            lowCount ++;
        } else if ( 'A' <= str[i] && str[i] <= 'Z' ) {
            upCount ++;
        }
    }

    // 결과 출력
    printf("Uppercase letters : %d \n", upCount);
    printf("Lowercase letters : %d \n", lowCount);
}

