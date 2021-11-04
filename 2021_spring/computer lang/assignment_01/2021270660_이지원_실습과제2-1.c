#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

// 헬멧의 체적(volume)과 표면적(surface area)을 구하는 프로그램

#define PIE 3.14159265  // 파이 값 기호 상수 정의

int main(void) {
    int height, radius; // 정수로 헬멧의 높이(height)와 base 반지름(radius) 선언
    double vol, surf;   // 실수로 체적(vol)과 표면적(surf) 선언
    
    // 값을 입력 받는다.
    printf("헬멧의 높이 : ");
    scanf(" %d", &height);
    printf("base 반지름 : ");
    scanf(" %d", &radius);

    // 공식을 통해 체적과 표면적을 계산한다.
    vol = (PIE/6 * height) * (3 * radius*radius + height*height);
    surf = 2 * PIE * ( (height / 3.0) + (vol / (PIE * height*height)) ) * height ;

    // 결과 값 출력
    printf("헬멧의 체적: %f \n", vol);
    printf("헬멧의 표면적: %f", surf);
}
