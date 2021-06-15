#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    char nome[40];
    int c;
    
    printf("Informe o nome: ");
    fgets(nome,40,stdin);
    
       printf("\nQual seu sexo? \nDigite 1 para Masculino \nOu 2 para feminino ");
    scanf("%d",&c);

    if(c == 1)

    printf("\n llmo. Sr %s",nome);

    else

    printf("\n llma Sra. %s",nome);
    
}
