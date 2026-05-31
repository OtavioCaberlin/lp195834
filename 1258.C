/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Otávio Fernandes Caberlin - 195834
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1258
Data        : 21/05/2026
Objetivo    : Escrever uma lista de pedidos de camisetas.
Aprendizado : Uso de struct, sua nomeação e sintaxe, ordenação na saída.
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>

// Struct das camisetas
typedef struct {
    char nome[50];
    char cor[20];
    char tamanho;
} Camiseta;

int main() {

    // Declaração das variáveis
    int casos;
    int primeiro = 1;

    // Processamento de entrada para todos os casos, enquanto for != 0
    while(scanf("%d", &casos) && casos != 0) {

        Camiseta c1[casos];

        // Lê todas as camisetas
        for(int i = 0; i < casos; i++) {
            scanf(" %[^\n]", c1[i].nome);
            scanf("%s %c", c1[i].cor, &c1[i].tamanho);
        }

        // Ordena comparando uma camiseta com as outras
        for(int i = 0; i < casos - 1; i++) {
            for(int j = i + 1; j < casos; j++) {

                int trocar = 0;

                // Se a cor estiver fora de ordem
                if(strcmp(c1[i].cor, c1[j].cor) > 0) {
                    trocar = 1;
                }

                // Se a cor for igual, compara o tamanho
                else if(strcmp(c1[i].cor, c1[j].cor) == 0) {

                    if(c1[i].tamanho < c1[j].tamanho) {
                        trocar = 1;
                    }

                    // Se cor e tamanho forem iguais, compara o nome
                    else if(c1[i].tamanho == c1[j].tamanho) {

                        if(strcmp(c1[i].nome, c1[j].nome) > 0) {
                            trocar = 1;
                        }
                    }
                }

                // Troca as camisetas de posição
                if(trocar == 1) {
                    Camiseta aux = c1[i];
                    c1[i] = c1[j];
                    c1[j] = aux;
                }
            }
        }

        // Linha em branco entre casos
        if(primeiro == 0) {
            printf("\n");
        }

        primeiro = 0;

        // Imprime resultado
        for(int i = 0; i < casos; i++) {
            printf("%s %c %s\n", c1[i].cor, c1[i].tamanho, c1[i].nome);
        }
    }

    return 0;
}
