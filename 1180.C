/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Otávio Fernandes Caberlin - 195834
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1180
Data        : 11/06/2026
Objetivo    : Achar o menor valor em um vetor e determinar sua posição.
Aprendizado : Rodar um vetor e achar o valor que foi pedido.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {

    // Declaração das variáveis
    int num, min = 0, posicao = 0, v[1000];

    // Processamento de entrada
    scanf("%d", &num);

    // Loop de leitura do vetor
    for(int i = 0; i < num; i++) {
        
        scanf("%d", &v[i]);
    }

    // Declaração do valor mínimo inicial
    min = v[0];

    // Roda o vetor para achar o menor número e sua posição
    for(int i = 0; i < num; i++) {
        
        if(v[i] < min) {
            
            min = v[i];
            posicao = i;
        }
    }

    // Processamento de saída
    printf("Menor valor: %d\nPosicao: %d\n", min, posicao);
    
    return 0;
}
