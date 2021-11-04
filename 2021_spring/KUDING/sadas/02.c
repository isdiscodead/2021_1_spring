#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031) 
 
int main () {
    int i, j, n;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }

        for ( ; j <= ( n*2 - i ); j++) {
            printf(" ");
        }

        for (j = 1; j <= i; j++) {
            printf("*");
        } 
 
        printf("\n");
    }
 
    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++) { 
            printf("*");
        }

        for ( ; j <= ( n*2 - i ); j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) { 
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}