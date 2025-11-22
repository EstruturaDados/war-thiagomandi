#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void limparBufferEntrada(){
    int c;
    while ((c=getchar())!= '\n'&& c!= EOF);
}

// Struct Territorio
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {
    // Declaração de um vetor de 5 structs do tipo Territorio
    struct Territorio territorios[5];
    int i;

    printf("--- Cadastro de 5 Territorios ---\n");

    // Cadastro dos 5 territórios
    for (i = 0; i < 5; i++) {
        printf("\nTerritorio %d:\n", i + 1);

        printf("Nome: ");
        fgets(territorios[i].nome,30,stdin);

        printf("Cor do exercito: ");
        fgets(territorios[i].cor,10,stdin);

        territorios[i].nome[strcspn(territorios[i].nome, "\n")]= '\0';
        territorios[i].cor[strcspn(territorios[i].cor, "\n")]= '\0';

        printf("Numero de tropas: ");
        scanf("%d", &territorios[i].tropas);
        limparBufferEntrada();
    }

    printf("\n--- Informacoes dos Territorios Registrados ---\n");
    
    // Imprimir as informações de todos os territórios
    for (i = 0; i < 5; i++) {
        printf("\nTerritorio %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exercito: %s\n", territorios[i].cor);
        printf("Numero de tropas: %d\n", territorios[i].tropas);
    }
    getchar();

    return 0;
}