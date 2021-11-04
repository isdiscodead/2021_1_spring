#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031) 

#define LEN 11

int main() {

    // 변수 선언
    int arr[LEN];
    int i, j, temp, num, idx;

    // 데이터 입력 받기
    for ( i=0 ; i < LEN-1 ; i++ ) {
        printf("숫자를 입력하세요 (%d) >> ", i+1);
        scanf(" %d", &arr[i]);
    }

    // 정렬 전 데이터 출력 
    printf("정렬 전 : ");
    for ( i=0 ; i < LEN-1 ; i++) {
        printf("%d ", arr[i]);
    }

    // 정렬 시작
    for ( j=0 ; j < LEN-2 ; j++ ) {
        for ( i=j+1 ; i < LEN-1 ; i++ ) {
            if ( arr[j] > arr[i] ) {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }  
    }

    // 정렬된 데이터 출력
    printf("\n정렬 후 : ");
    for ( i=0 ; i < LEN-1 ; i++ ) {
        printf("%d ", arr[i]);
    }

    // 추가 데이터 1개 입력 받는다. 
    printf("\n추가 데이터를 입력해주세요 : ");
    scanf(" %d", &num);

    // 자리 찾기 
    idx = LEN-1;

    for( i=LEN-2 ; i > 0 ; i-- ) {
        if( arr[i] > num ) {
            arr[i+1] = arr[i];
            idx = i;

        } else {
            break;
        } 
    }

    arr[idx] = num;

    // 결과 데이터 출력
    printf("삽입 후 : ");
    for ( i=0 ; i < LEN ; i++ ) {
        printf("%d ", arr[i]);
    }

    return 0;
}

