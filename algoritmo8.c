#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "portuguese");
	//entradass
	int tempo, hora, minuto, segundo;
	printf("Transformação  de tempo");
	printf("\nDigite um intervalo de tempo em segundos: ");
	scanf("%d", &tempo);
	//processamento
	hora = tempo / 3600;
	minuto = (tempo % 3600) / 60;
	segundo = (tempo % 3600) % 60;
	//saida
	printf("\n%d segundos, equivalem a: %d horas , %d minutos, %d segundos", tempo, hora, minuto, segundo );
}
