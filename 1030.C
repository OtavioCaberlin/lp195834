/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Otávio Fernandes Caberlin - 195834
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1030
Data        : 09/06/2026
Objetivo    : Caucular a pessoa sobrevivente em uma roda de eliminações.
Aprendizado : Uso de recursividade em um cilco até sobrar 1.
-------------------------------------------------------------------------- */

#include <stdio.h>

int josephus(int x, int y) {

    // Caso 0
    int sobrevivente = 0; 

    // Calcula proximos indivíduos
    for(int i = 2; i <= x; i++) {
        sobrevivente = (sobrevivente + y) % i;
    }

    // Iniciando em 1
    return sobrevivente + 1;
}

int main() {

    // Declaração da variável
    int casos;

    // Processamento dos casos
    scanf("%d", &casos);

    for(int i = 1; i <= casos; i++) {
        
        int pessoas, salto;

        // Processamento quantidade e tamanho do salto
        scanf("%d %d", &pessoas, &salto);

        // Processamento da saída 
        printf("Case %d: %d\n", i, josephus(pessoas, salto));
    }

    return 0;
}
