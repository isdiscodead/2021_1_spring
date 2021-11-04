#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

#define ROW 5
#define COL 5

int main() {
    int arr[ROW][COL];
    int i, j;
    int value = 0;

    for ( i=0 ; i < ROW ; i++ ) {
        if ( i % 2 == 0 ) {
            for ( j=0 ; j < COL ; j++ ) {
                arr[i][j] = ++value;
            }
        } else {
            for ( j=COL-1 ; j >= 0 ; j-- ) {
                arr[i][j] = ++value;
            }
        }
    }

    for ( i=0 ; i < ROW ; i++ ) {
        for ( j=0 ; j < COL ; j++ ) {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}