#include <stdio.h>
#include <stdlib.h>
#include <locale.h>   //incluir a biblioteca
main()
{
	//Crie um programa que leia dois numeros inteiros e os some
	int numero1, numero2, soma;
	//o comando abaixo permite escrever em portugues
	setlocale(LC_ALL,"Portuguese");
	printf("Soma de dois números inteiros");
	printf("\nDigite o 1º número ");
	scanf("%d",&numero1);//leitura da variavel
	printf("\nDigite o 2º número ");
	scanf("%d",&numero2);//leitura da variavel
	//PROCESSAMENTO
	soma = numero1 + numero2;
	//SAIDA
	printf("\n A soma vale: %d",soma);
	printf("\n %d + %d = %d ",numero1,numero2,soma);

}
