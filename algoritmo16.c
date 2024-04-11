#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "portuguese");
	int a, b;
	printf(" Maior ou menor de dois números inteiros");
	printf("\nDigite o 1º numero ");
	scanf("%d",&a);
	printf("\nDigite o 2º numero ");
	scanf("%d",&b);
	if( a > b ){
		printf("%d > %d", a,b);
	}
	else // A não é maior que B
	if(a < b){
	printf(" %d < %d", a,b);
	}
	else{ // A não é menor que b
	printf(" %d = %d", a,b);
	}
	
}
