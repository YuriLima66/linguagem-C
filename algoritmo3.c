#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	float base, altura, vol;//declarando as variaveis
	//entrada 
	printf("Volume de uma piramide");
	printf("\n Digite o valor da �rea da base, em m: ");
	scanf("%f",&base);	
	printf("\n Digite o valor altura, em m: ");
	scanf("%f",&altura);	
	//processamento 
	vol = base*altura/3;
	//saida
	printf("Volume da pir�mide: %.2f M�.",vol);
	
}
