#include<stdio.h> 
#include<locale.h>

int main() { 
    setlocale(LC_ALL, "Portuguese"); 

    char placa[8];
	int velocidade;
    
    printf("Informe a placa: ");
    fgets(placa, 8, stdin);
	printf("Informe a velocidade: ");
    scanf("%d", &velocidade);
	
	
    if(velocidade > 80){
	
		printf("Veículo multado por exceder a velocidade da via!");
	}else if(velocidade<=0){
	    printf("Velocidade incompatível! \n");
	
    }else printf("Veiculo trafegando dentro da velocidade permitida");
	
	return 0;
	
}
