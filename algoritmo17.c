#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "portuguese");
	int A,B;
	printf("Divisibilidade em dois numeros inteiros");
	printf("\nDigite o 1� numero ");
	scanf("%i",&A);
	printf("\nDigite o 2� numero ");
	scanf("%i",&B);
	if (B == 0){
	printf("\n\n N�o existe divisibilidade de ZERO");
	}
	else
	if(A % B== 0)
	printf("\n\n %d � divisivel por %d", A,B);
	else{ //A % B n�o � igual a ZERO
	printf("\n\n %d N�o � divisivel por %d", A,B);
	}
}
