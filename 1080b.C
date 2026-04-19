/* --------------------------------------------------------------------------
Nome        : Otávio Fernandes Caberlin - 195834
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/problems/view/1080
Exercício   : 1080
Data        : 16/04/2026
Objetivo    : Maior número entre 100 e sua posição (com vetores).
Aprendizado : Como utilizar vetores e suas aplicações.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {

	int v[100], maior, entrada, i;

	for(i = 0; i < 100; i++) {

		scanf("%d", &v[i]);

		if(i == 0) {
			maior = v[0];
			entrada = 1;
		}
		else if(v[i] > maior) {
			maior = v[i];
			entrada = i + 1;
		}
	}

	printf("%d\n", maior);
	printf("%d\n", entrada);

	return 0;
}
