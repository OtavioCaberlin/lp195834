/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Otávio Fernandes Caberlin - 195834
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1046
Data        : 19/05/2026
Objetivo    : Calcular tempo gasto jogando.
Aprendizado : Como usar função junto com if.
-------------------------------------------------------------------------- */

#include <stdio.h>

int calcularDuracao(int inicio, int fim) {
    
    // Cálculo do tempo gasto 
    if(fim > inicio) {
        
        return fim - inicio;
    }
    
    // Quando passa de um dia para outro
    else {
        
        return (fim + 24) - inicio;
    }
}

int main () {
    
    // Declaração das variáveis
    int inicio, fim, duracao = 0;

    // Processamento da entrada
    scanf("%d %d", &inicio, &fim);
    
    // Uso da função 
    duracao = calcularDuracao(inicio, fim);
    
    // Processamento da saída
    printf("O JOGO DUROU %d HORA(S)\n", duracao);
    
    return 0;
}
