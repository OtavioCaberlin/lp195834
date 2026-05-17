/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Otávio Fernandes Caberlin - 195834
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1015
Data        : 14/05/2026
Objetivo    : Calcular a distância entre dois pontos.
Aprendizado : Como usar potência e raiz e como fazer a leitura em matriz.
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <math.h>

int main() {
    
    // Declaração das variáveis
    double x1, x2, y1, y2, dist = 0;
    
    // Leitura das linhas
    for(int i = 0; i < 2; i++) {
        
        // Leitura das colunas
        for(int j = 0; j < 2; j++) {
            
            if(i == 0 && j == 0) {
                scanf("%lf", &x1);
            }
            else if(j > i) {
                scanf("%lf", &y1);
            }
            else if(i > j) {
                scanf("%lf", &x2);
            }
            else {
                scanf("%lf", &y2);
            }
        }
    }
    
    // Cálculo da distância
    dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    // Processamento da saída
    printf("%.4lf\n", dist);
    
    return 0;
}
