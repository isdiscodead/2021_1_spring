#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

int main() {
    // 사용자로부터 –1이 입력될 때까지 정수를 입력받아 입력된 정수의 합과 평균을 계산해서 출력하는 프로그램
    // 입력 : 입력 받는 정수 num, 입력받은 정수 
    // 출력 : 정수의 합 sum, 평균 ( 변수로 빼도 되지만, sum / count으로 계산하여 출력 ) 

    int num;
    int sum = 0; 
    double count = 0; // 정수 나눗셈을 신경써야 할 때는 계산할 때만 신경 쓰자 !! 정수는 정수로 !! 
    

    // if 문에 -1이 아니라는 조건을 걸어 break할 것이기 때문에 무한 루프를 사용해 로직 구현
    while ( 1 ) {
        printf("정수 입력( 종료 -1 ): ");
        scanf(" %d", &num);

        if( num == -1 ) {
            break;
        }

        // 전체 합에 num을 더하고 count를 1씩 증가
        sum += num;
        count ++;
    }

    // 바로 -1이 입력되었을 경우의 예외 처리를 해야 한다 !!
    if ( count == 0 ) {
        printf("입력된 숫자가 존재하지 않습니다.");

    } else {
        printf("입력된 정수의 합 : %d\n", sum);
        printf("입력된 정수의 평균 : %.2f", sum / count);       
    }

    return 0;
}