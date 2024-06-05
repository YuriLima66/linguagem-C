#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {
    char cpf[12];
    float salarioMin, salarioContribuinte, valorComDesconto, perCapta;
    int qtdContribuintes = 10, i, qtdDependentes;
    
    setlocale(LC_ALL, "Portuguese");
    
    printf("Soma do imposto de renda\n");
    printf("Digite o valor do sal�rio m�nimo atualmente: ");
    scanf("%f", &salarioMin);

    for (i = 1; i <= qtdContribuintes; i++) {
        printf("\nContribuinte %d\n", i);
        printf("Digite o n�mero do CPF: ");
        scanf("%s", cpf);
        printf("Digite o sal�rio do contribuinte %d, portador do CPF %s: ", i, cpf);
        scanf("%f", &salarioContribuinte);
        printf("Digite o n�mero de dependentes: ");
        scanf("%d", &qtdDependentes);
        
        perCapta = salarioContribuinte / (qtdDependentes + 1);

        if (perCapta >= salarioMin * 2 && perCapta <= salarioMin * 3) {
            valorComDesconto = salarioContribuinte * 0.95;
            printf("O contribuinte %s ter� desconto de 5 por cento pois a renda per capita de sua fam�lia supera 2 sal�rios m�nimos.\n", cpf);
        } else if (perCapta > salarioMin * 3 && perCapta <= salarioMin * 5) {
            valorComDesconto = salarioContribuinte * 0.9;
            printf("O contribuinte %s ter� desconto de 10 por cento pois a renda per capita de sua fam�lia supera 3 sal�rios m�nimos.\n", cpf);
        } else if (perCapta > salarioMin * 5 && perCapta <= salarioMin * 7) {
            valorComDesconto = salarioContribuinte * 0.85;
            printf("O contribuinte %s ter� desconto de 15 por cento pois a renda per capita de sua fam�lia supera 5 sal�rios m�nimos.\n", cpf);
        } else if (perCapta > salarioMin * 7) {
            valorComDesconto = salarioContribuinte * 0.8;
            printf("O contribuinte %s ter� desconto de 20 por cento pois a renda per capita de sua fam�lia supera 7 sal�rios m�nimos.\n", cpf);
        } else {
            printf("O contribuinte %s est� ISENTO\n", cpf);
            continue;
        }
        
        printf("Ap�s o desconto, o contribuinte %s receber� R$%.2f.\n", cpf, valorComDesconto);
    }

}

