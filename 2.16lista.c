#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    
   
    float a1,a2,a3;
    char n1[40];
	char n2[40];
	char n3[40];
   
    
    printf("\nInforme o primeiro nome de cada pessoa: ");
    scanf("%s%s%s",&n1,&n2,&n3);
    
    printf("Informe a altura 1: ");
    scanf("%f",&a1);
    
    printf("Informe a altura 2: ");
    scanf("%f",&a2);
    
     printf("Informe a altura 3: ");
    scanf("%f",&a3);
    

   if(a1<a2 && a1<a3)
   printf("%s é a menor pessoa do grupo, com %.2f Metros",n1,a1);
   
   else if(a2<a1 && a2<a3)
   printf("%s é a menor pessoa do grupo, com %.2f Metros",n2,a2);
   
   else if(a3<a1 && a3<a2)
   printf("%s é a menor pessoa do grupo, com %.2f Metros",n3,a3);
    
    
    return 0;
}
