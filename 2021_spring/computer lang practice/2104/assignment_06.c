#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

int main() {

    /* 문제 1번 
    int i, n;
    int factorial = 1;

    printf("Enter the desired 'factorial' value (1 ~ 10) : ");
    scanf(" %d", &n);

    if ( n < 1 || n > 10 ) {
        printf("Input error!");
        return 1;
    }

    printf("%d! = ", n);

    for ( i = n ; i >= 1 ; i-- ) {
        factorial *= i;
        if ( i == 1 ) {
            printf("%d ", i);
        } else {
            printf("%d*", i);
        }
    }

    printf("= %d", factorial);
    */  



    /* 문제 2번 

    int no; 
    int max = 0;
    int min = 100;

    while( no ) {
        printf("input value( no, 1 ~ 100 ) : ");
        scanf(" %d", &no);

        if ( no > 100 || no < 0 ) {
            printf("-- Input Error -- \n");

        } else if ( no == 0 ) {
            break;

        } else {
            if ( max < no ) {
                max = no;
            } else if ( min > no ) {
                min = no;
            }
        } 
    }

    printf("max : %d, min: %d", max, min);
    */



    /* 문제 3번 
    int num = 1, sum = 0, count = 0;
    double avg;

    while ( num ) {
        printf(">> input value : ");
        scanf(" %d", &num);

        if ( (!sum) && (!num) ) {
            printf("============================\n");
            printf("-> Only 0 entered! ");
            return 1;

        } else if ( num ) {
            count ++;
            sum += num;
        }
    }

    avg = (double)sum / count;

    printf("============================\n");
    printf("-> Sum: %d, Ave: %.1f", sum, avg);

    */



    /* 문제 4번 
    
    int i;
    int sum = 0;

    for ( i = 1 ; i < 11 ; i++ ) {
        if ( i %2 == 1 ) {
            sum += i;
            if ( i == 1 ) {
                printf("%d ", i);
            } else {
                printf("+ %d ", i);
            }
        } else {
            sum -= i;
            printf("- %d ", i);
        }
    }

    printf("= %d", sum);

    */



    /* 문제 5번 */
    int i, j;

    for ( i = 0 ; i < 10 ; i ++ ) {
        if ( i < 6 ) {
            for ( j = 0 ; j < i ; j ++ ) {
                printf("%d ", j);
            } 
        } else {
            for ( j = 0 ; j < 10-i ; j ++ ) {
                printf("%d ", j);
            }
        }

        printf("\n");
        
    }
        
    return 0;
}