#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {
    setlocale(LC_ALL, "portuguese");

    int i, numero, Negativos = 0;
    int Positivos = 0;

    for (i = 1; i <= 20; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &numero);

        if (numero > 0) {
            Positivos += numero;
        } else if (numero < 0) {
            Negativos++;
        }
    }

    printf("\nSoma dos números positivos: %d", Positivos);
    printf("\nTotal de números negativos: %d\n", Negativos);

}


