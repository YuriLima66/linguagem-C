#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    int n, i;
    printf("Digite um n�mero inteiro positivo n: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Por favor, digite um n�mero inteiro positivo maior que zero.\n");
        return 1;
    }
    printf("S�rie de n�meros quadrados at� o %d-�simo termo:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }
}

