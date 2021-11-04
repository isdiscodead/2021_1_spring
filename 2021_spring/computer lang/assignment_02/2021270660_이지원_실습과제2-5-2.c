#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

int main() {
    // inputTem = 입력받는 온도, outputTem = 출력되는 결과 온도
    double inputTem, outputTem; 
    char temType; // 입력 받는 온도가 어떤 온도인지 구분하는 변수

    // scanf()로 입력받는다. 
    printf("온도? ( 온도와 단위인 c 또는 f까지 입력해주세요. )");
    scanf(" %lf %c", &inputTem, &temType);

    // 입력받은 temType에 따라 case 분기를 나누어 계산하고 결과를 출력한다. ( 대소문자 상관 X )
    switch (temType) {
        case 'c' :
        case 'C' : // 섭씨 온도를 입력 받을 경우
            outputTem = ( inputTem ) * ( 9.0 / 5.0 ) + 32;
            printf("%.0f C = %.2f F", inputTem, outputTem);
            break;

        case 'f' :
        case 'F' : // 화씨 온도를 입력 받을 경우
            outputTem = ( inputTem - 32 ) * ( 5.0 / 9.0 );
            printf("%.0f F = %.2f C", inputTem, outputTem);
            break;
            
        default :
            // 그 외의 입력이 들어왔을 경우 input error 출력
            printf("입력 오류!! 온도의 단위는 C(또는 c)와 F(또는 f)만 가능합니다.");
            break;
    }
        
    return 0;
}   