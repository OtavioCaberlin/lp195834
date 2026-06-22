/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Otávio Fernandes Caberlin - 195834
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/2552
Data        : 11/06/2026
Objetivo    : Fazer o "jogo do pão de queijo", similar ao campo minado.
Aprendizado : Contagem ao longo de uma matriz de fatores adjacecntes.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {

    // Declaração das variáveis 
    int linha, coluna, soma;
    int m[100][100];

    while (scanf("%d %d", &linha, &coluna) != EOF) {

        for (int i = 0; i < linha; i++) {
            
            for (int j = 0; j < coluna; j++) {
                
                scanf("%d", &m[i][j]);
            }
        }

        for (int i = 0; i < linha; i++) {
            
            for (int j = 0; j < coluna; j++) {

                if (m[i][j] == 1) {
                    
                    printf("9");
                } 
                else {
                    
                    soma = 0;
                    
                    if (j + 1 < coluna && m[i][j + 1] == 1)
                        soma++;

                    if (j - 1 >= 0 && m[i][j - 1] == 1)
                        soma++;

                    if (i + 1 < linha && m[i + 1][j] == 1)
                        soma++;

                    if (i - 1 >= 0 && m[i - 1][j] == 1)
                        soma++;

                    printf("%d", soma);
                }
            }
            
            printf("\n");
        }
    }

    return 0;
}
