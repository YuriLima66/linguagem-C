#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "portuguese");
	//entradass
	int garrafas, engradado, sobra;
	printf("Ajude a AMBEV a embalar os engradados");
	printf("\nDigite a quantidade de garrafas que deseja embalar:");
	scanf("%d", &garrafas);
	//processamento
	engradado = garrafas / 24;
	sobra = garrafas % 24;
	//saida
	printf("\nSer�o usados %d engradados", engradado);
	printf("\nSobrar�o %d garrafas pra embalar", sobra);
}
