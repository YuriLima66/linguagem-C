#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {
    setlocale(LC_ALL, "portuguese");
    int n, i,proximoTermo;
    int termo1 = 1, termo2 = 1;
    printf("Digite um n�mero inteiro positivo n: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Por favor, digite um n�mero inteiro positivo maior que zero.\n");
        return 1;
    }
    printf("S�rie de Fibonacci at� o %d-�simo termo:\n", n);

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

