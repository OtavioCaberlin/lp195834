/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Otávio Fernandes Caberlin - 195834
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1441
Data        : 26/05/2026
Objetivo    : Encontrar o maior valor que aparece na Sequência de Granizo iniciada.
Aprendizado : Uso de recursão em sequências, atualização de variáveis durante a recursividade.
-------------------------------------------------------------------------- */

#include <stdio.h>

// Função recursiva que retorna o maior número da sequência
long long granizo(long long h, long long maior) {

    // Atualiza o maior valor encontrado
    if (h > maior) {
        maior = h;
    }

    // Caso base: quando chegar em 1, termina
    if (h == 1) {
        return maior;
    }

    // Se o número for par, divide por 2
    if (h % 2 == 0) {
        return granizo(h / 2, maior);
    }

    // Se o número for ímpar, faz 3*h + 1
    return granizo(3 * h + 1, maior);
}

int main() {

    long long h;

    // Lê até encontrar 0
    while (scanf("%lld", &h) && h != 0) {

        // Chama a função recursiva começando com maior = h
        printf("%lld\n", granizo(h, h));
    }

    return 0;
}
