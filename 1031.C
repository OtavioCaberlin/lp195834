/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Otávio Fernandes Caberlin - 195834
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1031
Data        : 09/06/2026
Objetivo    : Eliminar cidade em um padrão cíclico, deixando a 13ª por último.
Aprendizado : Utilização de recursão e while para padrões cíclicos.
-------------------------------------------------------------------------- */

#include <stdio.h>

int ultimaRegiao(int quantidadeRegioes, int salto) {
    
    int posicao = 0;

    // Mesma fórmula de Josephus
    for (int total = 2; total < quantidadeRegioes; total++) {
        posicao = (posicao + salto) % total;
    }

    return posicao;
}

int main() {

    // Declaração da variável
    int regioes;

    // Loop para todos os casos    
    while (scanf("%d", &regioes) && regioes) {
        
        int passo = 1;
        
        // Teste de passos
        while (1) {
            
            // 12 corresponde à região 13 
            if ((ultimaRegiao(regioes, passo) + 1) % regioes == 12) {
                
                // Processamento de saída
                printf("%d\n", passo);
                
                break;
            }

            passo++;
        }
    }

    return 0;
}
