#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int num, i, cont = 0;
	printf("Divisores de um N� inteiro positivo...");	
	printf("\nDigite um N� inteiro positivo...");		
	scanf("%d",&num);
	printf("\n\nDivisores de %d:\n",num);
	for(i=1; i<= num; i++){
		if(num% i == 0){
			printf("\n%d",i);
			cont++;
		}
	}
	printf("\n\n %d tem %d divisores",num, cont);	
		if( cont >= 3){
			printf("\n %d N�O � primo",num );
		}	else{
			printf("\n %d � primo",num );
			
		}
		
	return 0;
}
