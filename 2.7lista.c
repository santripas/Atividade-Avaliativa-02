#include <stdio.h>

int main(){

   int num1,num2;
   
   printf("Informe o valor 1: ");
   scanf("%d",&num1);
   printf("Informe o valor 2: \n");
   scanf("%d",&num2);
   
   if(num1>num2)
   printf("%d",(num1-num2));
   
   else printf("%d",(num2-num1));
   
   return 0;
   

}
