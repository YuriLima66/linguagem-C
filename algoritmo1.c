#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	float tc,tf;//tc � diferente de TC ou de tC ou de Tc
	//entrada
	printf("Convers�o de �F a �C:");
	printf("\n Digite uma temperatura em Farenheit: ");
	scanf("%f",&tf);//%f float %i inteiro %c caractere	
	//processamento
	tc =  5 * (tf - 32)/9;	
	//sa�da
	printf("\n\n%.1f �F equivalem a %.1f �C", tf,tc);//ordem das variaveis � feita respectivamente, no final da linha
}
