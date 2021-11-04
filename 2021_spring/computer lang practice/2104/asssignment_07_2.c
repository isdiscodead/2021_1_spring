#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

int getSign( int num );

int main() {
    int num, i;
    int sum = 0;

    for ( i=0 ; i<10 ; i++ ) {
        printf("(%d) enter value >> ", i+1);
        scanf("%d", &num);

        if ( getSign(num) ) {
            sum += num;
        }
    }
    
    printf("-> sum of positive values : %d", sum);
    
    return 0;
}

int getSign( int num ) {
    if ( num > 0 ) {
        return 1;
    } else {
        return 0;
    }
}


