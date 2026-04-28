/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Otávio Fernandes Caberlin - 195834
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1078
Data        : 28/04/2026
Objetivo    : Realizar a impressão de um tabuada.
Aprendizado : Utilização várias variáveis em oprações e imprimir várias coisas em loop.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    
    // Declaração das variáveis
    int n, multipli = 0;
    
    // Processamento de entrada
    scanf("%d", &n);
    
    // Definindo intervalo de entrada
    if(n > 2 && n < 1000) {
        
        // Execução da tabuada
        for(int i = 1; i <= 10; ++i) {
            
            multipli = i * n;
            
            printf("%d x %d = %d\n", i, n, multipli);
        }
    }
    return 0;
}
