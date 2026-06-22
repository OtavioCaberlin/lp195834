/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Otávio Fernandes Caberlin - 195834
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/2552
Data        : 11/06/2026
Objetivo    : Fazer o "jogo do pão de queijo", similar ao campo minado.
Aprendizado : Contagem ao longo de uma matriz de fatores adjacentes.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {

    // Declaração das variáveis 
    int linha, coluna, soma;
    int m[100][100];

    // Loop até o fim das entradas
    while (scanf("%d %d", &linha, &coluna) != EOF) {

        // Processamento da matriz
        for (int i = 0; i < linha; i++) {
            
            for (int j = 0; j < coluna; j++) {
                
                scanf("%d", &m[i][j]);
            }
        }

        // Matriz com o números de pães de queijo
        for (int i = 0; i < linha; i++) {
            
            for (int j = 0; j < coluna; j++) {

                // Se o número for 1 (tem pão de queijo)
                if (m[i][j] == 1) {
                    
                    printf("9");
                } 

                // Se o número for 0 (não tem pão de queijo)
                else {

                    // Zera a soma a cada linha
                    soma = 0;

                    // Se a coluna não for maior que o máx existente e se a direita for 1
                    if (j + 1 < coluna && m[i][j + 1] == 1)
                        soma++;
                    // Se a coluna não for menor que o mín existente e se a esquerda for 1
                    if (j - 1 >= 0 && m[i][j - 1] == 1)
                        soma++;
                    // Se a linha não for maior que o máx existente e se embaixo for 1
                    if (i + 1 < linha && m[i + 1][j] == 1)
                        soma++;
                    // Se a linha não for menor que o mín existente e se em cima for 1
                    if (i - 1 >= 0 && m[i - 1][j] == 1)
                        soma++;
                    // Processamento de saída
                    printf("%d", soma);
                }
            }
            
            printf("\n");
        }
    }

    return 0;
}
