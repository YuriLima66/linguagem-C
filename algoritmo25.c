#include <stdio.h>
int main(){
	int n;
	printf("digite um numero de 1 a 6: ");
	scanf("%d",&n);
	
	//estrutura switch-case para avaliar o caso digitado
	//sintaxe é como se escreve um comando ou codigo
	
	switch(n){
	case 1:
	printf("O numero da variavel'n'eh %d", n);
	break;
	
	case 2:
	printf("O numero da variavel'n'eh %d", n);
	break;
	
	case 3:
	printf("O numero da variavel'n'eh %d", n);
	break;
	
	case 4:
	printf("O numero da variavel'n'eh %d", n);
	break;
	
	case 5:
	printf("O numero da variavel'n'eh %d", n);
	break;
	
	case 6:
	printf("O numero da variavel'n'eh %d", n);
	break;
	
	default:
	printf("\nEntrada invalida");
	break;
	}
		
		
	
	
	
	
	
	return 0;
}
