/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Otávio Fernandes Caberlin - 195834
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1534
Data        : 12/05/2026
Objetivo    : Escrever uma matriz, sem usar o perador [].
Aprendizado : Como fazer um loop para matriz e determinar suas diagonais.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    
    // Declaração da variável
    int n;
    
    // Loop até chegar no EOF
    while(scanf("%d", &n) != EOF) {
        
        // Número de linhas
        for(int i = 0; i < n; i++) {
            
            // Número de colunas
            for(int j = 0; j < n; j++) {
                
                // Diagonal inversa
                if(i + j == n - 1) {
                    printf("2");
                } 
                
                // Diagonal principal
                else if (i == j) {
                    printf("1");
                }
                
                // Resto da matriz
                else {
                    printf("3");
                }
            }
            
            // Processamento de saída
            printf("\n");
        }
    }
    return 0;
}
