#pragma warning(disable: 4996)
#pragma warning(disable: 6031)
#include<stdio.h>

int main(){
   int num;

   // max와 min은 어떠한 num이 오더라도 그에 맞출 수 있도록 우선 초기화
   int max = 1, min = 100;

   do {
      printf(">>input number: ");
      scanf_s(" %d, &num, sizeof(num)");
      // scanf("%d", &num);

      if (num < 1 || num > 100) {
         printf("- Out of bound -\n");
         
      }
      else {

         num > max ? max = num : max;
         num < min ? min = num : min;
      }
   } while (num);

   printf("-> max: %d, min: %d", max, min);

   return 0;

}