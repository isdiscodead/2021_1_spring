#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

int main() {

    // x, y 좌표를 int로 선언하고 입력받는다. 
    int x, y;

    printf("점의 좌표 (x, y) ? ");
    scanf(" %d %d", &x, &y);
    
    // 최대한 연산을 적게 하는 방향으로 로직 작성 
    if ( x > 0 && y > 0 ) { 
        printf("( %d, %d )은 1사분면에 있습니다. ", x, y);

    } else if ( x < 0 && y < 0 ) {  
        printf("( %d, %d )은 3사분면에 있습니다. ", x, y);

    } else if ( x == 0 && y == 0) { 
        printf("( %d, %d )은 원점 위에 있습니다. ", x, y);

    } else if ( y == 0 ) {  
        printf("( %d, %d )은 x축 위에 있습니다. ", x, y);

    } else if ( x == 0 ) {  
        printf("( %d, %d )은 y축 위에 있습니다. ", x, y);
        
    } else if ( x > 0 ) {
        printf("( %d, %d )은 4사분면에 있습니다. ", x, y);

    } else {
        printf("( %d, %d )은 2사분면에 있습니다. ", x, y);
    }

    return 0;
}   