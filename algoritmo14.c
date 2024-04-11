#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "portuguese");
	float n1, n2, n3, n4, media, recup;
	printf("Quatro notas e a média dessas notas é...");
	printf("\nDigite a 1ª nota.");
	scanf("%f",&n1);
	printf("\nDigite a 2ª nota.");
	scanf("%f",&n2);
	printf("\nDigite a 3ª nota.");
	scanf("%f",&n3);
	printf("\nDigite a 4ª nota.");
	scanf("%f",&n4);
	media = (n1 + n2 + n3 + n4) / 4;
	if(media >= 6){ printf("\n\nMédia = %.2f - APROVADO!",media);}
	else
	if(media >= 4){ printf("\n\n %.2f RECUPERAÇÃO - Você precisa tirar %.2f",media, 10-media);
	}
	else{
		{ printf("\n\n Média = %.2f - REPROVADO", media );}
	}
}
