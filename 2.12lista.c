#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
    int ddd;
    printf("Insira o DDD: ");
    scanf("%d",&ddd);

    if(ddd==61||ddd==71||ddd==11||ddd==21||ddd==32||ddd==19||ddd==27||ddd==31){
 
    if(ddd==61)
	printf("\nBrasilia");
    if(ddd==71)
	printf("\nSalvador");
    if(ddd==11)
	printf("\nSao Paulo");
    if(ddd==21)
	printf("\nRio de Janeiro");
    if(ddd==32)
	printf("\nJuiz de fora");
    if(ddd==19)
	printf("\nCampinas");
    if(ddd==27)
	printf("\nVitoria");
    if(ddd==31)
	printf("\nBelo Horizonte");

   }else 
    printf("Este DDD nao é válido");
	
	



return 0;
		
}
