#include <stdio.h>

int main(void){
    
    /* 
    if ( age >= 65 ) { // 65세 이상
        if ( 1 <= day ) { // 평일
            printf("fee = ", 5000 );
        } else { // 일요일
            printf("fee = ", 5500 );
        }
    } else { // 65세 미만
        if ( 1 <= day ) { // 평일
            printf("fee = ", 10000);
        } else { // 일요일
            printf("fee = ", 11000);
        }
    }

    
    if ( age >= 65 && 1 <= day ) { // 65세 이상 평일
        printf("fee = ", 5000 );
    } else if ( age >= 65 ){ // 65세 이상 일요일
        printf("fee = ", 5500 );
    } else if ( 1 <= day ){ // 65세 미만 평일
        printf("fee = ", 10000);
    } else { // 65세 미만 일요일
        printf("fee = ", 11000);
    }


    fee = 10000;
    if ( age >= 65 ) {
        fee - 5000
    } 
    if ( day == 0 ) {
        fee *= fee*1.1
    }

    */
    unsigned char a = 0xcd;
    unsigned char b = 0xf0;
    unsigned char c;

    c = a^b;
    printf("%02x\n", c);

    c = ~a | b<<2 ;
    printf("%02x\n", c);
}