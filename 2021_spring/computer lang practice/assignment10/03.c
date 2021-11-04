#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

#define ROW 3
#define COL 4

void printMat( int arr[][COL], int row, int col );    

int main() {
    int data[ROW][COL] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    printMat( data, ROW, COL );
    return 0;
}

void printMat( int arr[][COL], int row, int col ) {
    int i, j;
    for ( i=0 ; i < row ; i++ ) {
        for ( j=0 ; j < col ; j++ ) {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }
}
