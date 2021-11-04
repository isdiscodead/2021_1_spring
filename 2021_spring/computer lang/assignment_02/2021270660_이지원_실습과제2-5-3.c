#include <stdio.h>
#include <math.h>   // 제곱근 계산을 위한 sqrt() 함수 포함한 라이브러리
#pragma warning(disable:4996)
#pragma warning(disable:6031)

int main() {
    // 2차 방정식의 상관계수 int a, b, c와 근 equation, 판별식 dis
    int a, b, c;
    double equation1, equation2, dis; 


    // 상관 계수 a, b, c를 입력 받는다. 
    printf("2차 방정식의 상관계수 a, b, c를 모두 정수로 입력해주세요. \n");
    printf("ax^2 + bx + c >> ");
    scanf(" %d %d %d", &a, &b, &c);
    
    
    // 근 구하기 로직 구현
    if ( a == 0 ) { // a가 0이 입력될 경우 재입력 요구. 
        printf("2차항의 계수는 0이 될 수 없습니다. ");
        return 0 ;

    } else { // a가 0이 아닐 경우 
        dis = (b*b - 4*a*c); // 판별식부터 계산한다. ( 가독성 높이기 위함 )
        
        if ( dis < 0 ) { // 허근
            printf("입력해주신 2차 방정식은 허근을 갖습니다. ");

        } else if ( dis == 0 ) { // 중근
            equation1 = -(double)(b) / (2*a);
            printf("입력해주신 2차 방정식은 중근 x = %f 을 갖습니다. ", equation1);
        
        } else { // 서로 다른 두 실근
            equation1 = ( -(b) + sqrt(dis) ) / (2*a);
            equation2 = ( -(b) - sqrt(dis) ) / (2*a);
            printf("입력해주신 2차 방정식은 두 근 x1 = %f, x2 = %f 을 갖습니다. ", equation1, equation2);
        }
    } 

    return 0;
}   