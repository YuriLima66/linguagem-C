//VERiFICAR SE O NUMERO � PAR
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	int num;
	printf("PAR OU IMPAR");
	printf("\nDigite um n�mero inteiro positivo: ");
	scanf("%d",&num);
	if(num % 2 == 0){ printf("\n\n%d � PAR",num); }
	//else significa 
	else { printf("\n\n %d � IMPAR!!",num); }
}
