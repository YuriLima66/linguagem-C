#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "portuguese");
	int num;
	printf("Numero divisivel por 10, 5 e 2");
	printf("\nDigite um numero para dividir  ");
	scanf("%i",&num);
	if(num % 10 == 0){ 
	printf("\n\n%i é divisivel por 10", num);
	}
	else{printf("\n\n%i NÃO é divisivel por 10", num);
	}
	if(num % 5 == 0){ 
	printf("\n\n%i é divisivel por 5", num);
	}
	else{printf("\n\n%i NÃO é divisivel por 5", num);
	}
	if(num % 2 == 0){ 
	printf("\n\n%i é divisivel por 2", num);
	}
	else{printf("\n\n%i NÃO é divisivel por 2", num);
	}
	
	






}
