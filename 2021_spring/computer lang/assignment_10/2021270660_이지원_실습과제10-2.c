#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

#define MAX_STD 5

// 구조체 정의 
struct student {
    char name[20];
    int korean, english, math;
    double average;
};

void input_student(struct student *s);
void output_student(struct student s);
double compute_class_avg(struct student p[], int size);
int Find_First(struct student p[], int size);

int main(void) {
    struct student std[MAX_STD];
    int i, first;
    double total_average = 0;

    printf("%d 명의 학생 정보를 입력하세요.\n", MAX_STD);

    for (i = 0; i < MAX_STD; i++) 
        input_student( &(std[i]) );
    
    printf("\n이름       국어 영어 수학 평균\n");
    for (i = 0; i < MAX_STD; i++)
        output_student(std[i]);

    total_average = compute_class_avg(std, MAX_STD);
    printf("\n전체 평균 : %6.2f\n", total_average);
        
    first = Find_First(std, MAX_STD);
    printf("\n우리 반 1등은 %s입니다\n", std[first].name);

    return 0;
}

// student 구조체 변수의 주소를 전달받아 이름, 국, 영, 수 점수를 입력받고, 평균을 계산해주는 함수
void input_student(struct student *s) {
    printf("이름: ");
    // scanf(" %s", (*s).name );
    gets_s( s->name , sizeof(s->name));

    printf("국어, 영어, 수학 점수 : ");
    scanf("%d %d %d", &(s->korean), &(s->english), &(s->math));

    getchar();  // 버퍼 비우기 ( 제 콘솔에서는 자꾸 먹혀서 추가했습니다. )

    s->average = ( s->korean + s->english + s->math ) / 3.0;
}

// student 구조체 변수를 전달받아 이름, 국, 영, 수, 평균을 출력하는 함수
void output_student(struct student s) {
    printf("%-14s%4d %4d %4d %6.2f\n", s.name, s.korean, s.english, s.math, s.average);
}

// student 구조체 배열과 배열의 크기를 전달받아 전체 평균을 계산하여 반환해주는 함수
double compute_class_avg(struct student p[], int size) {
    double ave = 0;
    for ( int i = 0 ; i < size ; i++ ) { 
        ave += p[i].average;
    }
    return ( ave / size );
}

//  student 구조체 배열과 배열의 크기를 전달받아 1등 학생의 인덱스를 반환해주는 함수
int Find_First(struct student p[], int size) {
    int first = 0;
    for ( int i = 1 ; i < size ; i++ ) {
        if ( p[first].average < p[i].average ) 
            first = i;
    }
    return first;
}
