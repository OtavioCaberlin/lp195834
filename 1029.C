/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Otávio Fernandes Caberlin - 195834
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1029
Data        : 26/05/2026
Objetivo    : .
Aprendizado : .
-------------------------------------------------------------------------- */

#include <stdio.h>

int chamadas;

// Função recursiva de Fibonacci
int fib(int n) {

    // Caso base: fib(0) = 0
    if (n == 0) {
        return 0;
    }

    // Caso base: fib(1) = 1
    if (n == 1) {
        return 1;
    }

    // Cada fib(n) faz duas chamadas recursivas
    chamadas += 2;

    // Retorna a soma dos dois anteriores
    return fib(n - 1) + fib(n - 2);
}

int main() {

    int n, x, resultado;

    // Lê a quantidade de casos de teste
    scanf("%d", &n);

    // Repete para cada caso
    for (int i = 0; i < n; i++) {

        // Lê o valor de Fibonacci
        scanf("%d", &x);

        // Zera o contador de chamadas para cada teste
        chamadas = 0;

        // Calcula Fibonacci usando recursão
        resultado = fib(x);

        // Imprime no formato pedido
        printf("fib(%d) = %d calls = %d\n", x, chamadas, resultado);
    }

    return 0;
}
