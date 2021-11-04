#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)


typedef struct point{
    int x, y;
} point_t;

typedef struct retangle{
    point_t p1;
    point_t p2;
} rect_t;


double computeArea( rect_t r );
int isSquare( const rect_t *p );


int main(void) {
    // 구조체 변수 선언
    rect_t rect;
    double area;

    // 점 정보 입력
    printf("사각형의 대각 점 좌표 입력\n");
    printf("첫번째 점 좌표: ");
    scanf("%d %d", &(rect.p1.x), &(rect.p1.y));
    printf("두번째 점 좌표: ");
    scanf("%d %d", &(rect.p2.x), &(rect.p2.y));

    // computeArea 호출
    area = computeArea( rect );
    printf("\n사각형의 면적: %.2f\n\n", area);

    // isSquare 검사
    if( isSquare(&rect) ) {
        printf("입력하신 사각형은 정사각형입니다.\n");
    } else {
        printf("입력하신 사각형은 직사각형입니다.\n");
    }

    return 0;
}


double computeArea( rect_t r ) {
    double area = ( r.p2.x - r.p1.x ) * ( r.p2.y - r.p1.y);

    // 결과가 음수일 경우 절댓값을 취해준다. 
    if ( area < 0 )
        area = -area;

    return area;
}


int isSquare( const rect_t *p ) {
    // 음수일 경우도 체크해야 하므로 ( 거리로 따져야 함 ) 제곱해서 처리한다. 
    int dx = ( p->p2.x - p->p1.x )*( p->p2.x - p->p1.x );
    int dy = ( p->p2.y - p->p1.y )*( p->p2.y - p->p1.y );

    if (  dx == dy ) 
        return 1;
    else 
        return 0;

    // x 끼리의 차 , y끼리의 차 구하기
    // return ( diff_x == diff_y || diff_x == -diff_y );
}