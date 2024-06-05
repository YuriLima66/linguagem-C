/*Criar um algoritmo em C que leia o um número inteiro entre 1 e 7 e
escreva o dia da semana correspondente. Caso o usuário digite um
número fora desse intervalo, deverá aparecer uma mensagem
informando que não existe dia da semana com esse número.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "portuguese");
	int dia;
	printf("Vamos descobrir o dia da semana");
	printf("\nDigite um nº de 1 á 7: ");
	scanf("%d",&dia);
	if(dia == 1){printf("\nO nº%d equivale á domingo",dia); }
	else if (dia==2){printf("\nO nº%d equivale á segunda-feira",dia); }
	else if (dia==3){printf("\nO nº%d equivale á terça-feira",dia); }
	else if (dia==4){printf("\nO nº%d equivale á quarta-feira",dia); }
	else if (dia==5){printf("\nO nº%d equivale á quinta-feira",dia); }
	else if (dia==6){printf("\nO nº%d equivale á sexta-feira",dia); }
	else if (dia==5){printf("\nO nº%d equivale á sábado",dia); }
		else{printf("\nO nº%d é INVÁLIDO",dia);
		}
	
		
	}
