//Objetivo:verificar se três valores podem constituir um triângulo
//Entrada: três valores
//Saida: constitui ou não os lados de um  triângulo

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
	    printf("Os valores podem constituir um triângulo!");
	}else
		printf ("Os valores não podem constituir os lados de um triângulo!");
	
	



  return 0;
		
}
