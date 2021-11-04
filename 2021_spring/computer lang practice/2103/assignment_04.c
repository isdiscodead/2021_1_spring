#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

int main(void) {
    /*
    int no = 10, count = 20;
    char ch = 'a';

    printf(" %d", no > count);
    printf(" %d", no < count * 1);
    printf(" %d", (no != 10) || (count >= 20) );
    printf(" %d", (no <= 10) && (count > 20) );
    printf("\n------\n");
    printf(" %d\n", !(no > count));
    printf(" %d\n", 3);
    printf(" %d\n", ch);
    printf(" %d\n", 'b');
    printf(" %d\n", sizeof(3.2));
    printf(" %d\n", sizeof(3.2f));
    printf(" %d\n", sizeof(float));
    printf(" %d\n", sizeof(double));
    */

   /*
   int a = 3, b = 0;
   printf("%d , %d \n", a, b);
   b = ++a * 2;
   printf("%d , %d \n", a, b);
   a = b-- * 2;
   printf("%d , %d \n", a, b);
   a = a++ % 4;
   printf("%d , %d \n", a, b);
   a += a*b;
   printf("%d , %d \n", a, b);
   */

    int num1, num2, num3, max_n;

    printf("Input 3 values : ");
    scanf(" %d", &num1);
    scanf(" %d", &num2);
    scanf(" %d", &num3);

    max_n = ( num1 >= num2 ) ? num1 : num2;
    max_n = ( num3 >= max_n ) ? num3 : max_n;

    printf("Max : %d", max_n);
}