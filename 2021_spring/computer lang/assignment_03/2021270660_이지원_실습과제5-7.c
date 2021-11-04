#include <stdio.h>
// #include <windows.h> // system 함수를 사용하기 위한 헤더파일
#pragma warning(disable:4996)
#pragma warning(disable:6031)

// [5-7번] 중첨 for문을 이용하여 삼각형을 출력하는 다음의 프로그램을 완성하시오. 

int main() {
    int size, i, j;
    char menu;

    while (1) {
        printf("---------------------------------\n");
        printf("1. 왼쪽 직각 삼각형 찍기\n");
        printf("2. 오른쪽 직각 삼각형 찍기\n");
        printf("3. 왼쪽 직각 역삼각형 찍기\n");
        printf("4. 오른족 직각 역삼각형 찍기\n");
        printf("5. 종료\n");
        printf("---------------------------------\n");


        do{
            printf("==> 메뉴 선택: ");
            scanf(" %c", &menu); 

            if ('1' <= menu && menu <= '5') {
                break;
            }    

            printf("잘못된 입력입니다. 메뉴를 다시 선택해주세요\n");
        } while (1);

        if ( menu == '5' ) { // 종료 조건 검사
            printf("프로그램을 종료합니다\n");
            break; // return 해도 상관 x
        }


        printf("==> 삼각형 크기(line 수) 입력: ");
        scanf("%d", &size);

        switch ( menu ) { 
            case '1':
                // 왼쪽 직각 삼각형 출력코드
                for ( i = 0 ; i <= size ; i++ ) {
                    for ( j = 0 ; j < i ; j++ ) {
                        printf("*");
                    }
                    printf("\n");
                }

                printf("\n");
                break;

            case '2':
                // 오른쪽 직각 삼각형 출력코드
                for ( i = 0 ; i <= size ; i++ ) {
                    for ( j = 0 ; j < (size-i) ; j++ ) {
                        printf(" ");
                    }   // 이 내부 for문은 printf("%*c", size-i, ' '); 로 만들 수 있다
                        // *은 자릿수가 매번 달라진다는 뜻 ( 가변자리 )
                    for ( j = 0 ; j < i ; j ++ ) {
                        printf("*");
                    }
                    printf("\n");
                }
                
                printf("\n");
                break;

            case '3':
                // 왼쪽 직각 역삼각형 출력코드
                printf("\n");

                for ( i = size ; i >= 0 ; i-- ) {
                    for ( j = size ; j > (size-i) ; j-- ) {
                        printf("*");
                    }
                    printf("\n");
                }
                break;

            case '4':
                // 오른쪽 직각 역삼각형 출력코드
                printf("\n");

                for ( i = size ; i >= 0 ; i-- ) {
                    for ( j = size ; j > i ; j-- ) {
                        printf(" ");
                    }
                    for ( j = 0 ; j < i ; j ++ ) {
                        printf("*");
                    }
                    printf("\n");
                }
                break;
        }

        // system("pause"); /// 화면 상태 유지
        // system("cls"); // 화면 지우기
    }
}