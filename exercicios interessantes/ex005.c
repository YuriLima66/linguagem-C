#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {
    setlocale(LC_ALL, "portuguese");
    float nota1, nota2, nota3, mediaEx, mediaA;
   
    printf("Digite a 1� nota: ");
    scanf("%f", &nota1);

    printf("Digite a 2� nota: ");
    scanf("%f", &nota2);

    printf("Digite a 3� nota: ");
    scanf("%f", &nota3);

    printf("Digite a m�dia dos exerc�cios: ");
    scanf("%f", &mediaEx);

    mediaA = (nota1 + nota2 * 2 + nota3 * 3 + mediaEx) / 7;
    
    if(mediaA < 4){
    	printf("\nM�dia de Aproveitamento: %.1f", mediaA);
    	printf("\nAproveitamento insuficiente.");
    	printf("\n\nNota E.");}
			else if(mediaA >=4 && mediaA < 6) {
		printf("\nM�dia de Aproveitamento: %.1f", mediaA);
    	printf("\nAproveitamento abaixo do esperado.");
    	printf("\n\nNota D.");
    	printf("\n\n RECUPERA��O.");}	
			else if(mediaA >=6 && mediaA < 7.5) {
		printf("\nM�dia de Aproveitamento: %.1f", mediaA);
    	printf("\nAproveitamento esperado.");
    	printf("\n\nNota C.");
    	printf("\n\n PARAB�NS, VOC� PASSOU.");}
    	else{
		printf("\nM�dia de Aproveitamento: %.1f", mediaA);
    	printf("\nAproveitamento excelente!.");
    	printf("\n\nNota A.");
    	printf("\n\n PARAB�NS, VOC� PASSOU..");}
    	
   

}
