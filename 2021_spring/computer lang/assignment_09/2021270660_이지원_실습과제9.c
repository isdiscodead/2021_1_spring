#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

#define SIZE 100


void swap(char *a, char *b);
int my_strlen(const char *p);
void my_strcpy(char *p1, const char *p2);
int my_strcmp(const char *p1, const char *p2);
void makeLower(char p[]);
void makeReverse(char p[]);
void strSwap(char *p1, char *p2);


int main() {
    char str1[SIZE], str2[SIZE], str3[SIZE];

    printf("문자열(str1) 입력: ");
    gets_s(str1, SIZE);
    // gets(str1); 맥북이라 테스트 용으로 추가한 부분입니다.
    
    printf("\nstr1의 길이 : %d\n", my_strlen(str1));
    
    my_strcpy(str2, str1);
    makeLower(str2);
    printf("\nstr1을 소문자로 변환 = %s\n", str2);

    my_strcpy(str3, str1);
    makeReverse(str3);
    printf("\nstr1의 역순 = %s\n", str3);

    if (my_strcmp(str1, str2))
        printf("\n%s == %s\n", str1, str2);
        
    if (!my_strcmp("abc", "abcd"))
        printf("\n\"abc\" != \"abcd\"\n\n");

    my_strcpy(str3, "C is fun");
    printf("------ strSwap() 함수 호출 전---------\n");
    printf("str1 = %s\nstr3 = %s\n", str1, str3);

    strSwap(str1, str3);
    printf("------ strSwap() 함수 호출 후---------\n");
    printf("str1 = %s\nstr3 = %s\n", str1, str3);

    return 0;
}


// 두 문자의 내용을 교환하는 함수 (makeReverse() 함수와 strSwap() 함수에서 호출된다)
void swap(char *a, char *b) {
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// 문자 배열 또는 문자열 상수(이하 문자열)를 전달받아 문자열의 길이를 반환하는 함수
// 단, 널문자는 세지 않는다.
int my_strlen(const char *p) {
    int size; 
    for( size=0 ; p[size] ; size ++ );
    return size;
}

// 두 문자열을 전달받아 두 번째 문자열을 첫번째 문자열에 복사하는 함수
void my_strcpy(char *p1, const char *p2) {
    int i;
    for( i=0 ; p2[i] ; i++ ) {
        p1[i] = p2[i];
    }
    // for ( int i = 0 ; p1[i] = p2[i] ; i++ );

    // null 문자 추가
    p1[i] = 0;
}

// 전달받은 두 문자열을 비교하여 같으면 1, 다르면 0을 반환한다.
int my_strcmp(const char *p1, const char *p2) {
    int result = 1;

    if (my_strlen(p1) != my_strlen(p2)) {
        return 0;
    }

    for (int i = 0; p1[i]; i++) {
        if (p1[i] != p2[i]) {
            result = 0;
        }
    }
    return result;
}

// 문자배열을 전달받아 소문자로 변환해주는 함수(대문자이외의 문자는 변환되지 않는다)
// 포인터의 증가연산을 이용할 것
void makeLower(char p[]) {
    for( int i=0 ; *p ; i++, p++ ) {
        if( 'A' <= *p && *p <= 'Z' ) {
            *p += ('a' - 'A');
        }
    }
}

// 문자배열을 전달받아 역으로 변환해주는 함수(함수 내부에서 임시 배열을 선언하지 않는다)
void makeReverse(char p[]) {
    int size =  my_strlen(p);
    for( int i=0 ; i < size / 2 ; i++ ) {
        swap( p+i, p+(size-i-1) );
    }
}

// 전달받은 두 문자열의 내용을 서로 교환하는 함수(함수 내부에서 임시 배열을 선언하지 않는다)
// 포인터의 산술 연산을 이용할 것
void strSwap(char *p1, char *p2) {
    for( int i=0 ; *(p1+i) || *(p2+i) ; i++ ) {
        swap( p1+i, p2+i );
    }
}

void strSwap(char *p1, char *p2) {
    int i;
    int len1 = my_strlen(p1);
    int len2 = my_strlen(p2);

    int length = (len1 > len2) ? len1 : len2;

    // Null 문자까지 복사해야 하므로 <= length가 되어야 한다 !! 
    for (i=0 ; i <= length; i++ ) {
        swap( p1+i, p2+i );
    }

    // 둘 중 하나라도 값이 있으면 계속 swap하게 됨 !! 안 된다 이눔아 !! 
    // for( int i=0 ; *(p1+i) || *(p2+i) ; i++ ) {
    //     swap( p1+i, p2+i );
    // }
}