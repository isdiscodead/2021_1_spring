#include <stdio.h>
#include <math.h>

// 각 함수 선언
// x축과 y축 좌표값을 전달받아 좌표 형태로 출력하는 함수
void display_point( int x1, int y1);  
// 두 점의 좌표를 전달받아 두 점 사이의 거리를 계산해서 반환해주는 함수(출력문 없음)
double compute_distance( int x1, int y1, int x2, int y2  );
// x축과 y축 좌표값, 그리고 이동량을 전달받아 x축과 y축 좌표값을 각각 이동량만큼 변경하는 함수
void move_point( int* x, int* y, int move );

int main() {
    // 변수 선언
    int x1, x2, y1, y2, move;
    double distance;

    // 좌표 값 입력 및 출력
    printf("p1 좌표 입력(x축, y축 좌표값 입력): ");
    scanf("%d %d", &x1, &y1);
    printf("p2 좌표 입력(x축, y축 좌표값 입력): ");
    scanf("%d %d", &x2, &y2);
    printf("p1 = ");
    display_point(x1, y1);
    printf("p2 = ");
    display_point(x2, y2);

    // compute_distance()를 호출하여 두 점 사이의 거리를 계산한 후 출력(실행 예 참고)
    distance = compute_distance( x1, y1, x2, y2 );
    printf("두 점 사이의 거리 = %f \n", distance);

    // 이동량 입력
    printf("좌표 이동량 입력: ");
    scanf("%d", &move);

    //move_point()를 호출하여 move만큼 p2에 해당하는 좌표값 변경
    move_point( &x2, &y2, move );

    printf("p2을 x축과 y축으로 각각 %d 만큼 이동 = ", move);
    display_point(x2, y2);

    return 0;
}

// 각 함수 정의 
void display_point( int x1, int y1) {
    printf("( %d, %d )\n", x1, y1);
}


double compute_distance( int x1, int y1, int x2, int y2  ) {
    double distance = sqrt( ( x1 - x2 )*( x1 - x2 ) + ( y1 - y2 )*( y1 - y2 ) );
    return distance;
}


void move_point( int* x, int* y, int move ) {
    *x += move;
    *y += move;
}