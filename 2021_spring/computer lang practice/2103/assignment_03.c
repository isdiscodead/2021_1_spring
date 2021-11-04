#pragma warning(disable:4996)
#pragma warning(disable:6031)

#include <stdio.h>

int main(void) {

    
    unsigned int no;
    printf("enter no: ");
    scanf(" %d", &no);

    printf("%d, %#o, %#x", no, no, no);
    

   /*
    double num;
    printf("Enter real num. ( double ): ");
    scanf(" %lf", &num);
    printf("%.3f * 1/2 = %.2f", num, num*0.5);
    */

    /*
    int num1, num2, num3, num_sum;

    printf("Enter 3 values : ");
    scanf(" %d %d %d", &num1, &num2, &num3);

    num_sum = num1 + num2 + num3;

    printf("%6d\n", num1);
    printf("%6d\n", num2);
    printf("%6d\n", num3);
    printf("------\n");
    printf("%6d\n", num_sum);
    printf("%6.1f", num_sum / 3.0 );
    */

   /*
    int total_p, member;
    double price;

    printf("===== n분의1 계산기 =====\n");
    printf("총 금액을 입력해주세요 : ");
    scanf(" %d", &total_p);
    printf("총 인원을 입력해주세요 : ");
    scanf(" %d", &member);

    price = total_p / (double)member;
    printf("1인당 내야 할 금액은 %.1f원 입니다.\n", price);

    */

}