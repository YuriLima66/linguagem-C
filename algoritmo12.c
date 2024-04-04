#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "portuguese");
	//entradass
	int saque, n100, n50, n20, n10, n5, n2;
	printf("Caixa eletrônico ");
	printf("\nDigite saque em R$: ");
	scanf("%d", &saque);
	//processamento
	n100 = saque / 100;
	n50 = (saque % 100)/ 50;
	n20=((saque%100) % 50) / 20;
	n10=(((saque % 100) % 50) % 20) / 10;
	n5=((((saque % 100) % 50)%20)%10)/5;
	n2=(((((saque % 100) % 50)%20)%10)%5)/2;
	
	//saida
	printf("\n%d Reais, equivalem a: %d notas de 100 , %d notas de 50, %d notas de 20, %d notas de 10, %d notas de 5 e %d notas de 2", saque, n100, n50, n20, n10,n5,n2 );
}
