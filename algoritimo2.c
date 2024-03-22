#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	float pol,mm;//declarando as variaveis
	//entrada 
	printf("Quantidade de chuvas - Conversão");
	printf("\n Digite uma quantidade de chuvas em Polegadas ");
	scanf("%f",&pol);	
	//processamento 
	mm = 25.4 * pol;
	//saida
	system("cls");//vem do stdlib, significa Limpar
	printf("\n%.1f polegadas é equivalente á %.1f milimetros.",pol,mm);
	]
}
