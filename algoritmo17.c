#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "portuguese");
	int A,B;
	printf("Divisibilidade em dois numeros inteiros");
	printf("\nDigite o 1º numero ");
	scanf("%i",&A);
	printf("\nDigite o 2º numero ");
	scanf("%i",&B);
	if (B == 0){
	printf("\n\n Não existe divisibilidade de ZERO");
	}
	else
	if(A % B== 0)
	printf("\n\n %d é divisivel por %d", A,B);
	else{ //A % B não é igual a ZERO
	printf("\n\n %d Não é divisivel por %d", A,B);
	}
}
