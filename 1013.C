/* --------------------------------------------------------------------------
Nome        : Otávio Fernandes Caberlin - 195834
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/problems/view/1013
Exercício   : 1013
Data        : 07/04/2026
Objetivo    : Apresentar o maior entre 3 números.
Aprendizado : Declaração de variáveis e uso do if e else.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    
    // declaração das variáveis
    int a, b, c;

    // Processamento das entradas
    scanf("%d %d %d", &a, &b, &c);

    // Teste se "a" é o maior
    if (a >= b && a >= c) {
        printf("%d eh o maior\n", a);
    }

    // Teste se "b" é o maior
    else if (b >= a && b >= c) {
        printf("%d eh o maior\n", b);
    }
    
    // Conclusão que "c" é o maior
    else {
        printf("%d eh o maior\n", c);
    }

    return 0;
}
