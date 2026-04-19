/* --------------------------------------------------------------------------
Nome        : Otávio Fernandes Caberlin - 195834
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/problems/view/1071
Exercício   : 1071
Data        : 14/04/2026
Objetivo    : Soma de ímpares entre 2 valores.
Aprendizado : Usar for junto com if, variável temporária e novos operadores.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {

	// DeclaraC'C#o das variC!veis
	int A, B, soma = 0;

	// Processamento das entradas
	scanf("%d", &A);
	scanf("%d", &B);

	// Caso 1: A = B
	if(A == B) {
		printf("%d\n", soma);
	}

	// Caso 2: A < B
	else if(A < B) {
		for(int i = A + 1; i < B; ++i) {
			if(i % 2 != 0) {
				soma = soma + i;
			}
		}
		printf("%d\n", soma);
	}

	// Caso 3: A > B
	else {
		for(int i = B + 1; i < A; ++i) {
			if(i % 2 != 0) {
				soma = soma + i;
			}
		}
		printf("%d\n", soma);
	}

	return 0;
}
