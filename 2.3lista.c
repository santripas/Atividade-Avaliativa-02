//Objetivo:verificar se tr�s valores podem constituir um tri�ngulo
//Entrada: tr�s valores
//Saida: constitui ou n�o os lados de um  tri�ngulo

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
	    printf("Os valores podem constituir um tri�ngulo!");
	}else
		printf ("Os valores n�o podem constituir os lados de um tri�ngulo!");
	
	



  return 0;
		
}
