#include <stdio.h>

int main() {

    int n;
    
    // Enquanto conseguir ler um número
    while (scanf("%d", &n) != EOF) {

        // Criação da matriz
        int matriz[70][70];

        // Percorre linhas
        for (int i = 0; i < n; i++) {

            // Percorre colunas
            for (int j = 0; j < n; j++) {

                // Diagonal principal
                if (i == j) {
                    matriz[i][j] = 1;
                }

                // Diagonal secundária
                else if (i + j == n - 1) {
                    matriz[i][j] = 2;
                }

                // Restante da matriz
                else {
                    matriz[i][j] = 3;
                }
            }
        }

        // Impressão da matriz
        for (int i = 0; i < n; i++) {

            for (int j = 0; j < n; j++) {
                printf("%d", matriz[i][j]);
            }

            printf("\n");
        }
    }

    return 0;
}
