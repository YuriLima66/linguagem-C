#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "portuguese");
	//entradass
	int tempo, ano, mes, semana, dia;
	printf("Transformação  de tempo dia em anos ");
	printf("\nDigite um intervalo de tempo em dias: ");
	scanf("%d", &tempo);
	//processamento
	ano = tempo / 365;
	mes = (tempo % 365) / 30;
	semana = ((tempo % 365) % 30 )/ 7;
	dia = ((tempo % 365) %30)% 7;
	//saida
	printf("\n%d dias, equivalem a: %d anos , %d meses, %d semanas, %d dias", tempo, ano, mes, semana, dia );
}
