#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

// 질량과 속력을 실수로 입력 받아 운동 에너지를 구하는 프로그램

int main(void) {
    // 실수 질량(mass), 속력(speed), 운동에너지(kEnergy) 변수 선언
    double mass, speed, kEnergy;

    // 콘솔에서 질량과 속력을 입력받는다. 
    printf("질량(kg)? ");
    scanf(" %lf", &mass);
    printf("속력(m/s)? ");
    scanf(" %lf", &speed);

    // 공식을 통해 운동 에너지 계산
    kEnergy = ( 1.0 / 2 ) * mass * speed * speed;

    // 결과 출력
    printf("운동 에너지: %.2f J", kEnergy);
}

