/* --------------------------------------------------------------------------
Nome        : Otávio Fernandes Caberlin - 195834
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/problems/view/2757
Exercício   : 2757
Data        : 09/04/2026
Objetivo    : Entrada e saída de números inteiros.
Aprendizado : Modelos diferentes para apresentar a saída.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {

  // Declaração das variáveis 
  int n1,n2,n3;

  // Processamento das entradas
  scanf("%d", &n1);
  scanf("%d", &n2);
  scanf("%d", &n3);

  // Processamento das saídas
  printf("A = %d, B = %d, C = %d\n", n1, n2, n3);
  printf("A = %10d, B = %10d, C = %10d\n", n1, n2, n3);
  printf("A = %010d, B = %010d, C = %010d\n", n1, n2, n3);
  printf("A = %-10d, B = %-10d, C = %-10d\n", n1, n2, n3);

  return 0;
}
