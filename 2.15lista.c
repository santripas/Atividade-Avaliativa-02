#include<stdio.h>
#include<locale.h>

int main() {
 setlocale(LC_ALL,"Portuguese");
 
    float a,b,c;

    printf("Quantidade de horas utilizando:");
    scanf("%f",&a);

    if(a<20) printf("Voce tem de pagar R$30,00");

    else 

    b = (a - 20);
    c = 30 + b*0.1*30;

    printf("voce terá de pagar R$%.2f",c);

}
