#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

void printBinNum( int num );

int main() {
    int num;
    
    printf("enter value >> ");
    scanf("%d", &num);
    
    printBinNum(num);
    
    return 0;
}

void printBinNum( int num ) {

    if ( num < 2 ) {
        printf("%d", num);

    } else {
        printBinNum(num/2);
        printf("%d", num%2 );
    }
    
}