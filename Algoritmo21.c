#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "portuguese");
	float preco,aumento, novo_preco;
	printf("Pre�o de um produto, aumento e classifica��o e pre�o novo");
	printf("\nDigite o pre�o de um produto e R$: ");
	scanf("%f",&preco);
	if(preco <= 50){ aumento = 0.05* preco;}
	else if (preco<= 100){aumento = 0.10* preco;}
		else{aumento = 0.15* preco;}
	novo_preco= preco + aumento;
	if(novo_preco <= 80){
	printf("\nNovo Pre�o = %.2f - BARATO", novo_preco);
		
	}	else if(novo_preco <= 120){
		printf("\nNovo Pre�o = %.2f - NORMAL", novo_preco);
		}	else if(novo_preco <= 200){
			printf("\nNovo Pre�o = %.2f - CARO", novo_preco);
			}	else{
				printf("\nNovo Pre�o = %.2f - MUITO CARO", novo_preco);
				}
	






}
