/* --------------------------------------------------------------------------
Nome        : Otávio Fernandes Caberlin - 195834
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/problems/view/1080
Exercício   : 1080
Data        : 16/04/2026
Objetivo    : Maior número entre 100 e sua posição (sem vetores).
Aprendizado : Comparação de muitos números em um loop muito grande.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    
    // Declaração das variáveis
    int num, maior, entrada, i;

    // loop de teste dos 100 valores
    for(i = 1; i < 101; i++) {
        
        // Processamento da entrada
        scanf("%d", &num);
        
        // Definindo valores da primeira entrada
        if(i == 1) {
            maior = num;
            entrada = i;
        }
        
        // Comparando com as demais entradas
        else if(num > maior) {
            maior = num;
            entrada = i;
        }
    }
    
    // Processamento das saídas
    printf("%d\n", maior);
    printf("%d\n", entrada);
    
    return 0;
}
