#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "portuguese");
	float bruto,prestacao;
	printf("Emprestimo casa propria");
	printf("\nDigite o seu salário BRUTO, em R$:");
	scanf("%f",&bruto);
	printf("\nDigite o valor que dejesa pagar em prestacao, em R$:");
	scanf("%f",&prestacao);
	if(prestacao <= 0.30*bruto){
		printf("\nEmprestimo APROVADO!");		
	}
	else{
		printf("\nEmprestimo NEGADO!");
		printf("\n\n Prestação maxima: R$ %.2f ", 0.30*bruto);
	}
	
	
}
