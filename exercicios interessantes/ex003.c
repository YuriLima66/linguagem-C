/*Criar um algoritmo em C que leia o um n�mero inteiro entre 1 e 7 e
escreva o dia da semana correspondente. Caso o usu�rio digite um
n�mero fora desse intervalo, dever� aparecer uma mensagem
informando que n�o existe dia da semana com esse n�mero.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "portuguese");
	int dia;
	printf("Vamos descobrir o dia da semana");
	printf("\nDigite um n� de 1 � 7: ");
	scanf("%d",&dia);
	if(dia == 1){printf("\nO n�%d equivale � domingo",dia); }
	else if (dia==2){printf("\nO n�%d equivale � segunda-feira",dia); }
	else if (dia==3){printf("\nO n�%d equivale � ter�a-feira",dia); }
	else if (dia==4){printf("\nO n�%d equivale � quarta-feira",dia); }
	else if (dia==5){printf("\nO n�%d equivale � quinta-feira",dia); }
	else if (dia==6){printf("\nO n�%d equivale � sexta-feira",dia); }
	else if (dia==5){printf("\nO n�%d equivale � s�bado",dia); }
		else{printf("\nO n�%d � INV�LIDO",dia);
		}
	
		
	}
