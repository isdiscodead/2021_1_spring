#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031) 

// main문에 int a = 3, b = 5; 라는 변수가 존재한다.
// swap( )함수를 호출하면 main문의 변수 a와 b의 값을 교환되는 코드를 작성하시오.

// 함수 선언
void swap( int *a, int *b );

int main() {
    // 변수 선언
    int a = 3;
    int b = 5; 

    printf("1. a, b: %d, %d\n", a, b);
    
    // swap() 함수 호출
    swap(&a, &b);
    printf("2. a, b: %d, %d\n", a, b);

    return 0;
}

// 함수 정의
void swap( int *a, int *b ) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp; 
} 