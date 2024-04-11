//VERiFICAR SE O NUMERO É PAR
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	int num;
	printf("PAR OU IMPAR");
	printf("\nDigite um número inteiro positivo: ");
	scanf("%d",&num);
	if(num % 2 == 0){ printf("\n\n%d é PAR",num); }
	//else significa 
	else { printf("\n\n %d é IMPAR!!",num); }
}
