#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    
   
    int anoN,atual,diasVividos;
    char nome[50];
    
    printf("Informe o nome da pessoa: ");
    scanf("%s",nome);

    printf("\nInsira o ano de seu nascimento: ");
    scanf("%d",&anoN);

    printf("\nInsira o ano atual: ");
    scanf("%d",&atual);

    diasVividos= (atual-anoN)*365;

    printf("\nVoce %s ja viveu aproximadamente %d dias",nome,diasVividos);
    
}
