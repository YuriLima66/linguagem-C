#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da estrutura para armazenar informações de contato
struct Contato {
    char nome[50];
    char telefone[20];
};

// Função para adicionar um novo contato
void adicionarContato(struct Contato *agenda, int *numContatos) {
    printf("Digite o nome do contato: ");
    scanf("%s", agenda[*numContatos].nome); // Solicita o nome do contato e o armazena na agenda

    printf("Digite o telefone do contato: ");
    scanf("%s", agenda[*numContatos].telefone); // Solicita o telefone do contato e o armazena na agenda

    (*numContatos)++; // Incrementa o número total de contatos na agenda
}

// Função para exibir todos os contatos
void exibirContatos(struct Contato *agenda, int numContatos) {
    if (numContatos == 0) { // Verifica se não há contatos na agenda
        printf("Nenhum contato na agenda.\n");
        return;
    }

    printf("Lista de contatos:\n");
    int i; // Declaração de 'i' antes do loop for
    for (i = 0; i < numContatos; i++) {
        printf("Nome: %s, Telefone: %s\n", agenda[i].nome, agenda[i].telefone); // Exibe o nome e o telefone de cada contato na agenda
    }
}

// Função para pesquisar um contato pelo nome
void pesquisarContato(struct Contato *agenda, int numContatos, char *nome) {
    int encontrado = 0;
    for (int i = 0; i < numContatos; i++) {
        if (strcmp(agenda[i].nome, nome) == 0) { // Compara o nome do contato atual com o nome fornecido
            printf("Contato encontrado:\n");
            printf("Nome: %s, Telefone: %s\n", agenda[i].nome, agenda[i].telefone); // Exibe o nome e o telefone do contato encontrado
            encontrado = 1;
            break;
        }
    }
    if (!encontrado) {
        printf("Contato nao encontrado.\n"); // Exibe uma mensagem se o contato não for encontrado
    }
}

int main() {
    struct Contato agenda[100]; // Capacidade máxima da agenda
    int numContatos = 0;
    int opcao;
    char nome[50];

    while (1) {
        printf("\nMenu:\n");
        printf("1. Adicionar Contato\n");
        printf("2. Exibir Contatos\n");
        printf("3. Pesquisar Contato\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao); // Corrigido para ler um inteiro

        switch (opcao) {
            case 1:
                adicionarContato(agenda, &numContatos); // Chama a função para adicionar um novo contato
                break;
            case 2:
                exibirContatos(agenda, numContatos); // Chama a função para exibir todos os contatos
                break;
            case 3:
                printf("Digite o nome do contato a ser pesquisado: ");
                scanf("%s", nome);
                pesquisarContato(agenda, numContatos, nome); // Chama a função para pesquisar um contato pelo nome
                break;
            case 4:
                printf("Encerrando o programa.\n");
                exit(0); // Encerra o programa
            default:
                printf("Opcao invalida. Tente novamente.\n"); // Exibe uma mensagem de erro se uma opção inválida for selecionada
        }
    }

    return 0;
}


