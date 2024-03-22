#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	float tc,tf;//tc é diferente de TC ou de tC ou de Tc
	//entrada
	printf("Conversão de ºF a ºC:");
	printf("\n Digite uma temperatura em Farenheit: ");
	scanf("%f",&tf);//%f float %i inteiro %c caractere	
	//processamento
	tc =  5 * (tf - 32)/9;	
	//saída
	printf("\n\n%.1f ºF equivalem a %.1f ºC", tf,tc);//ordem das variaveis é feita respectivamente, no final da linha
}
