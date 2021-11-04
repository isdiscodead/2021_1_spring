#include <stdio.h>
#define MAX 50

// 함수 선언문
int getArray(int p[]);                              // 포인터의 산술 연산 사용
void printArray(const int p[], int size);           // 포인터의 색인화 사용
double computeAverage(const int p[], int size);     // 포인터의 증가연산 사용
void copySquareArray(int p1[], const int p2[], int size);
void swapArray(int p1[], int p2[], int size);       // 포인터의 산술연산 사용
void swap( int *a, int *b );

int main() {
    int arr1[MAX], arr2[MAX];
    double average;
    int no; // 배열의 실제 크기

    // 배열 입력
    no = getArray(arr1);

    // 배열 출력
    printf("\narr1 = ");
    printArray(arr1, no);

    average = computeAverage(arr1, no);
    printf("arr1의 평균: %g \n", average);

    copySquareArray(arr2, arr1, no); 
    printf("\n==== squreArray() 함수 호출후 ======\n");
    printf("arr2 = ");
    printArray(arr2, no);

    swapArray(arr1, arr2, no);
    printf("\n==== swapArray() 함수 호출후 ======\n");
    printf("arr1 = ");
    printArray(arr1, no);
    printf("arr2 = ");
    printArray(arr2, no);

    return 0;
}

// 사용자에게 몇 개의 정수를 입력할지 입력받고, 입력받은 개수만큼 정수를 입력받아 배열에 저장한 후, 
// 실제 입력된 정수 데이터의 개수를 반환하는 함수 ( 포인터의 산술 연산 사용 )
int getArray(int p[]) {
    int count;
    printf("몇개의 정수를 입력하시겠습니까? ");
    scanf("%d", &count);

    printf("%d개의 정수 입력: ", count);
    for( int i = 0; i < count ; i++ ) {
        scanf("%d", p+i);
    }

    return count;
    // 주소 - 주소 연산 가능 ( 결과 값은 정수 (칸 수) )
    // return &p[size] - &p[0];
}

// 배열의 주소와 실제 크기를 전달받아 화면에 출력하는 함수 ( 포인터의 색인화 사용 )
void printArray(const int p[], int size) {
    printf("{");
    for ( int i = 0; i < size - 1 ; i++ ) {
        printf("%d, ", p[i]);
    }
    printf("%d}\n", p[size-1]);
    // 전체 반복 돌리고 마지막에 printf("\b\b}\n"); 해도 된다. 
}

// 배열의 주소와 실제 크기를 전달받아 평균을 계산하여 반환하는 함수 ( 포인터의 증가 연산 사용 )
double computeAverage(const int p[], int size) {
    int sum = 0;
    for ( int i = 0; i < size ; i++, p++ ) {
        sum += *p;
    }

    return (double)sum / size;
    // 포인터 산술 연산 사용 시 for문을 두 번 돌려야 한다면 함수 내에서 포인터 하나 더 선언
    // int *point = p; 아니면 p = p - size 해도 된다 ! 
}

// 두 배열의 주소와 실제 크기를 전달받아 첫 번째 배열의 각 원소값을 제곱하여 
// 두 번째 배열의 대응되는 위치의 원소에 저장하는 함수
void copySquareArray(int p1[], const int p2[], int size) {
    for( int i = 0; i < size ; i++ ) {
        p1[i] = p2[i] * p2[i];
    }
}

// swap 함수
void swap( int *a, int *b ) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// 배열의 주소와 실제 크기를 전달받아, 두 배열의 내용을 서로 교환하는 함수 ( 포인터의 산수 연산 사용 )
// 두 배열의 대응되는 원소의 값을 교환할 때, 두 정수의 내용을 교환하는 swap() 함수를 사용한다.
void swapArray(int p1[], int p2[], int size) {
    for ( int i = 0 ; i < size ; i ++ ) {
        swap( (p1+i), (p2+i) );
        // 색인화 사용 시 swap( &p[i], &p[i] )처럼 주소 연산자 사용해야 함!
        // &*(p2+i)도 OK...
    }
}