/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Otávio Fernandes Caberlin - 195834
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1028
Data        : 26/05/2026
Objetivo    : .
Aprendizado : .
-------------------------------------------------------------------------- */

#include <stdio.h>

// Função recursiva para calcular o MDC
int mdc(int a, int b) {

    // Caso base: se b for 0, o MDC é a
    if (b == 0) {
        return a;
    }

    // Chamada recursiva usando o algoritmo de Euclides
    return mdc(b, a % b);
}

int main() {

    int n, f1, f2;

    // Lê a quantidade de casos de teste
    scanf("%d", &n);

    // Repete para cada caso
    for (int i = 0; i < n; i++) {

        // Lê as quantidades de figurinhas
        scanf("%d %d", &f1, &f2);

        // O tamanho máximo da pilha é o MDC entre f1 e f2
        printf("%d\n", mdc(f1, f2));
    }

    return 0;
}
