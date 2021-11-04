#include <stdio.h>

int main(void) {

    // int val;
    // val = 98; 
    // printf("val %d의 ASCII에 해당하는 영문자: %c", val, val);


    // int no, in, out;
    // no = 34;
    // in = 124;
    // out = 512;
    // printf("%5d%-6d%06d", no, in, out);


    int vOne = 13;
    int vTwo = 3;

    printf("%d + %d = %d\n", vOne, vTwo, vOne+vTwo);
    printf("%d - %d = %d\n", vOne, vTwo, vOne-vTwo);
    printf("%d * %d = %d\n", vOne, vTwo, vOne*vTwo);
    printf("%d / %d = %d\n", vOne, vTwo, vOne/vTwo);
    printf("%d %% %d = %d\n", vOne, vTwo, vOne%vTwo);
}