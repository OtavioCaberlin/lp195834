/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Otávio Fernandes Caberlin - 195834
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1175
Data        : 11/06/2026
Objetivo    : Inverter um vetor.
Aprendizado : Fazer a leitura e criar um vetor invertido.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {

    // Declaração das variáveis
    int v1[20], v2[20];

    // Loop para ler o vetor
    for(int i = 0; i < 20; i++) {

        // Leitura e inversão do vetor
        scanf("%d", &v1[i]);
        v2[19 - i] = v1[i];
    }

    // Loop de impressão do vetor invertido
    for(int i = 0; i < 20; i++) {

        // Processamento de saída
        printf("N[%d] = %d\n", i, v2[i]); 
    }

    return 0;
}
