//objetivo: Ler um n�mero e apresent�-lo como o seu m�dulo
//entrada :n�mero
//saida :m�dulo

#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int num,modulo;
	
	printf("informe o numero: ");
	scanf("%d",&num);
	 
	 
	 
	 if(num>=0){
	 
	 printf("O m�dulo � : %d",num);
     
	 }else if(num<0){
	 modulo= num *(-1);
	 	
     printf("O m�dulo � : %d",modulo);
     }

}
