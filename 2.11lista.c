#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int lado1,lado2,lado3;
	
	printf("Informe o valor 1: ");
	scanf("%d",&lado1);
	printf("Informe o valor 2: ");
	scanf("%d",&lado2);
	printf("Informe o valor 3: ");
	scanf("%d",&lado3);
	
	if(lado1< (lado2+lado3) && lado2<(lado1+ lado3) && lado3 <(lado1 + lado2))
	{
		
		if(lado1 == lado2  && lado2 == lado3)
	    printf("Tri�ngulo equilatero!");
	else if(lado1 == lado2 || lado2== lado3|| lado1 == lado3)
	    printf("Tri�ngulo Is�sceles!");
	else if(lado1!= lado2 && lado2 != lado3 && lado3!= lado1)
		printf("Tri�ngulo escaleno");
	
	}else 
	printf("N�o constitui um Tri�ngulo");
	
	



  return 0;
		
}
