#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "portuguese");
	int a, b;
	printf(" Maior ou menor de dois n�meros inteiros");
	printf("\nDigite o 1� numero ");
	scanf("%d",&a);
	printf("\nDigite o 2� numero ");
	scanf("%d",&b);
	if( a > b ){
		printf("%d > %d", a,b);
	}
	else // A n�o � maior que B
	if(a < b){
	printf(" %d < %d", a,b);
	}
	else{ // A n�o � menor que b
	printf(" %d = %d", a,b);
	}
	
}
