#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    char nome[40];
    int c;
    float altura;
    
    printf("Informe o nome: ");
    fgets(nome,40,stdin);
    
    printf("\nQual seu sexo? \nDigite 1 para Masculino \nOu 2 para feminino ");
    scanf("%d",&c);
    
    printf("Informe a altura: ");
    scanf("%f",&altura);
    

    if(c == 1)

    printf("\n llmo. Sr %s seu peso ideal é de: %.2f\n",nome,((altura*72.5)-58));

    else

    printf("\n llma Sra. %s seu peso ideal é de: %.2f\n",nome,((altura*62.1)-44.7));
    
    
    return 0;
}
