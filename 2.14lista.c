#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    
   
    int valor1,valor2,valor3;
   
    
    printf("Informe o valor 1: ");
    scanf("%d",&valor1);
    
    printf("Informe o valor 2: ");
    scanf("%d",&valor2);
    
    printf("Informe o valor 3: ");
    scanf("%d",&valor3);
    

   if(valor1>valor2 && valor1 >valor3)
   printf("Valor 1: %d é o maior número",valor1);
   
   else if(valor2>valor1 && valor2>valor3)
   printf("Valor 2: %d é o maior número",valor2);
   
   else if(valor3>valor1 && valor3>valor2)
   printf("Valor 3: %d é o maior número",valor3);
    
    
    return 0;
}
