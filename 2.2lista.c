//objetivo: Ler um número e apresentá-lo como o seu módulo
//entrada :número
//saida :módulo

#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int num,modulo;
	
	printf("informe o numero: ");
	scanf("%d",&num);
	 
	 
	 
	 if(num>=0){
	 
	 printf("O módulo é : %d",num);
     
	 }else if(num<0){
	 modulo= num *(-1);
	 	
     printf("O módulo é : %d",modulo);
     }

}
