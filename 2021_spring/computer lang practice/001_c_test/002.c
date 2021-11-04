#include <stdio.h>
#include <limits.h>

int main(){
    char a = CHAR_MIN - 1; 
    short b = SHRT_MIN - 1;
    char ch = '\t';

    printf("%d, %d, %x\n", a, b, ch);
}