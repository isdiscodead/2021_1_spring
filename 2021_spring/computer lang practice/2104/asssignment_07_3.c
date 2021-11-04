#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

int getPrimeSum( int num );

int main() {
    int num;

    printf("enter value >> ");
    scanf("%d", &num);
    
    printf("-> sum of prime values : %d", getPrimeSum(num) );
    
    return 0;
}

int getPrimeSum( int num ) {
    int i, j;
    int flag = 0;
    int sum = 0; 

    if ( num < 0 ) {
        return 0;
    }

    for ( i = 0 ; i <= num ; i++ ) {
        for ( j = 2 ; j*j <= i ; j++ ) {
           
            flag = 1;

            if ( i % j == 0 ) {
                flag = 0;
                break;
            }
        }
        
        if ( i == 2 || i == 3 || flag == 1 ) {
            sum += i;
        }
    }

    return sum;
}


