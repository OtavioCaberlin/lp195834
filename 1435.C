/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Otávio Fernandes Caberlin - 195834
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1435
Data        : 11/06/2026
Objetivo    : Imrpimir matrizes formando "quadrados" com os números.
Aprendizado : Fazer matrizes somando umas às outras.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main()
{
    int ordem;
    int matriz[100][100];

    while (scanf("%d", &ordem) && ordem != 0)
    {
        // Inicializa com 0
        for (int i = 0; i < ordem; i++)
            for (int j = 0; j < ordem; j++)
                matriz[i][j] = 0;

        int valor = 1;
        int inicio = 0;
        int fim = ordem - 1;

        while (inicio <= fim)
        {
            // percorre a camada atual
            for (int i = inicio; i <= fim; i++)
            {
                for (int j = inicio; j <= fim; j++)
                {
                    matriz[i][j] = valor;
                }
            }

            valor++;
            inicio++;
            fim--;
        }

        // impressão formatada
        for (int i = 0; i < ordem; i++)
        {
            for (int j = 0; j < ordem; j++)
            {
                printf("%3d", matriz[i][j]);

                if (j < ordem - 1)
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
