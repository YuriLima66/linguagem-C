/*Escreva um algoritmo em C que, dada a idade de uma pessoa,
determine sua classifica��o segundo a seguinte tabela:
- maior de idade;
- menor de idade;
- pessoa idosa (idade superior ou igual a 65 anos).*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {
    setlocale(LC_ALL, "portuguese");


    int idade;
    printf("Vamos ver se voc� � maior de idade.");
    printf("\nDigite a idade em anos: ");
    scanf("%d", &idade);

    if (idade >= 18 && idade < 65) {
        printf("\n\nVoc� � MAIOR de idade.");
    } else if (idade >= 65) {
        printf("\n\nVoc� � considerado idoso(a).");
    } else {
        printf("\n\nVoc� � MENOR de idade.");
    }

    return 0;
}

