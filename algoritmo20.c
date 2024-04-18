#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "portuguese");
	float compra,venda, lucro, lucro_rs;
	printf("Lucro da venda com base no valor");
	printf("\n digite o valor da compra em R$: ");
	scanf("%f",&compra);
	if(compra < 10){ lucro = 0.70*compra;}
	else if(compra < 30){ lucro = 0.50*compra;}
		else if(compra < 50){ lucro = 0.40*compra;}
			else { lucro = 0.30*compra;}
	venda = lucro + compra;	
	lucro_rs= venda-compra;
	system("CLS");
	printf("Valor de compra do produto: %.2f",compra);
	printf("\n\nValor do lucro do produto: %.2f",lucro);
	printf("\n\nValor de venda do produto: %.2f",venda);
	printf("\n\nValor de lucro em R$: %.2f",lucro_rs);
	
	
	
	

	
	
	
	





}
