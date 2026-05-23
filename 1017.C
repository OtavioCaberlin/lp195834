/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Otávio Fernandes Caberlin - 195834
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1017
Data        : 19/05/2026
Objetivo    : Calcular quantos litros é necessário em uma viagem.
Aprendizado : Uso de função, sua sintaxe e como utilizar.
-------------------------------------------------------------------------- */

#include <stdio.h>

// Função para calcular os litros 
float calcularLitros (int tempo, int velocidade) {
    
    // Fórmula da conta
    return(float) (tempo * velocidade) / 12;    
}

int main () {
    
    // Declaração das variáveis
    int tempo, velocidade;
    float litros = 0;
    
    // Processamento da entrada
    scanf("%d %d", &tempo, &velocidade);
    
    // Puxa a fórmula da função 
    litros = calcularLitros(tempo, velocidade);
    
    // Processamento da saída
    printf("%.3f\n", litros);
    
    return 0;
}
