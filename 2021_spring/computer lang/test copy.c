#pragma warning(disable: 4996)
#pragma warning(disable: 6031)
#include<stdio.h>
#include<string.h>

int main(){
   char s4[] = "xyz", s5[4];
   strcpy(s5, s4);
   printf("%s", s5);

   return 0;

}