/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Otávio Fernandes Caberlin - 195834
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1258
Data        : 28/05/2026
Objetivo    : Calcular usando recursividade.
Aprendizado : Como aplicar recursividade.
-------------------------------------------------------------------------- */

#include <stdio.h>

unsigned long long calcularGraos(int casas) {

    // Caso base: se tiver apenas 1 casa, há apenas 1 grão
    if (casas == 1) {
        return 1;
    }

    // Chamada recursiva
    return 2 * calcularGraos(casas - 1) + 1;
}

int main() {

    int testes;
    int casas;

    // Lê a quantidade de casos de teste
    scanf("%d", &testes);

    // Repete enquanto ainda houver casos de teste
    while (testes > 0) {

        // Lê a quantidade de casas do tabuleiro
        scanf("%d", &casas);

        // Calcula o total de grãos usando recursividade
        unsigned long long graos = calcularGraos(casas);
        unsigned long long kg = graos / 12000;

        // Imprime a resposta no formato pedido
        printf("%llu kg\n", kg);

        // Diminui a quantidade de testes restantes
        testes--;
    }

    return 0;
}
