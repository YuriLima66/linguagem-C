/*Escreva um algoritmo em C que, dada a idade de uma pessoa,
determine sua classificação segundo a seguinte tabela:
- maior de idade;
- menor de idade;
- pessoa idosa (idade superior ou igual a 65 anos).*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {
    setlocale(LC_ALL, "portuguese");


    int idade;
    printf("Vamos ver se você é maior de idade.");
    printf("\nDigite a idade em anos: ");
    scanf("%d", &idade);

    if (idade >= 18 && idade < 65) {
        printf("\n\nVocê é MAIOR de idade.");
    } else if (idade >= 65) {
        printf("\n\nVocê é considerado idoso(a).");
    } else {
        printf("\n\nVocê é MENOR de idade.");
    }

    return 0;
}

