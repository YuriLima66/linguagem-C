#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {
    setlocale(LC_ALL, "portuguese");
    int n, i,proximoTermo;
    int termo1 = 1, termo2 = 1;
    printf("Digite um número inteiro positivo n: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Por favor, digite um número inteiro positivo maior que zero.\n");
        return 1;
    }
    printf("Série de Fibonacci até o %d-ésimo termo:\n", n);

    if (n == 1) {
        printf("%d", termo1);
    } else {
        printf("%d %d", termo1, termo2);
        for (i = 3; i <= n; i++) {
            proximoTermo = termo1 + termo2;
            printf(" %d", proximoTermo);
            termo1 = termo2;
            termo2 = proximoTermo;
        }
    }
}

