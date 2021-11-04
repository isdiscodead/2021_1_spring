#include <stdio.h>

int main() {
    char ch;
    ch = scanf("%c", &ch);
    ch = 'z' - (ch - 'a');
    printf("%c", ch);
}
