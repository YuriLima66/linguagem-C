#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int num, i, fat = 1;
	printf("Digite um N° inteiro positivo para fazer o fatorial...");
	scanf("%d",&num);
	for(i=1; i<= num; i++){
		fat=fat*i;
	}
	printf("\n\n%d! = %d",num,fat);
	


}
