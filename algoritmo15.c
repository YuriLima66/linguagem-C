#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "portuguese");
	float sal_inicial, sal_reaj, reajuste;
	printf("REAJUSTE DE SALÁRIOS");
	printf("\n Digite o salario inicial em R$: ");
	scanf("%f",&sal_inicial);
	printf("\n");
	if(sal_inicial <= 2500){ 
	reajuste=0.30*sal_inicial;}
	else{ // sal > 2500
	reajuste=0.20 * sal_inicial;}
	sal_reaj = sal_inicial + reajuste;
	printf("\nSalario inicial = R$ %.2f", sal_inicial);
	printf("\nReajuste = R$ %.2f", reajuste);
	printf("\nSalario Final = R$ %.2f", sal_reaj);
}
