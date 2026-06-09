/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Otávio Fernandes Caberlin - 195834
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1534
Data        : 12/05/2026
Objetivo    : Escrever uma matriz.
Aprendizado : Como fazer um loop para matriz e determinar suas diagonais.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {

    // Declaração da variável
    int n;
    
    // Loop até chegar no EOF
    while(scanf("%d", &n) != EOF) {

        // Criação da matriz
        int matriz[70][70];

        // Número de linhas
        for(int i = 0; i < n; i++) {

            // Número de colunas
            for(int j = 0; j < n; j++) {

                // Diagonal principal
                if(i == j) {
                    matriz[i][j] = 1;
                }

                // Diagonal inversa
                else if(i + j == n - 1) {
                    matriz[i][j] = 2;
                }

                // Resto da matriz
                else {
                    matriz[i][j] = 3;
                }
            }
        }

        // Impressão das linhas
        for(int i = 0; i < n; i++) {

            // Impressão das colunas
            for(int j = 0; j < n; j++) {
                printf("%d", matriz[i][j]);
            }

            // Quebra de linha
            printf("\n");
        }
    }
    return 0;
}
