#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    int n, i;
    printf("Digite um número inteiro positivo n: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Por favor, digite um número inteiro positivo maior que zero.\n");
        return 1;
    }
    printf("Série de números quadrados até o %d-ésimo termo:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }
}

