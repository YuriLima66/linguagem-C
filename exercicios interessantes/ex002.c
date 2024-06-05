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
	system("CLS");
	
	printf("\n\nValor de venda do produto: %.2f",venda);
	
	
}
	
