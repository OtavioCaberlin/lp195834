/* --------------------------------------------------------------------------
Nome        : Otávio Fernandes Caberlin - 195834
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Plataforma  : https://judge.beecrowd.com/pt/problems/view/2758
Exercício   : 2758
Data        : 09/04/2026
Objetivo    : Entrada e saída de números reais.
Aprendizado : Novos tipos de variáveis e formatação e limitação da saída.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {

	// DeclaraC'C#o das variC!veis
	float n1, n2; // precisC#o simpLes
	double n3, n4; // precisC#o dupla

	// Processamento das entradas
	scanf("%f", &n1); // precisC#o simples 1 casa decimal
	scanf("%f", &n2); // precisC#o simples 2 casas decimais
	scanf("%lf", &n3); // precisC#o dupla 3 casas decimais
	scanf("%lf", &n4); // precisC#o dupla 4 casas decimais

	// Processamento da saC-da normal
	printf("A = %f, B = %f\n", n1, n2);
	printf("C = %lf, D = %lf\n", n3, n4);

	// Processamento da saC-da 1 casa decimal
	printf("A = %.1f, B = %.1f\n", n1, n2);
	printf("C = %.1lf, D = %.1lf\n", n3, n4);

	// Processamento da saC-da 2 casas decimais
	printf("A = %.2f, B = %.2f\n", n1, n2);
	printf("C = %.2lf, D = %.2lf\n", n3, n4);

	// Processamento da saC-da 3 casas decimais
	printf("A = %.3f, B = %.3f\n", n1, n2);
	printf("C = %.3lf, D = %.3lf\n", n3, n4);

	// Processamento da saC-da 3 casas decimais com notaC'C#o cientC-fica
	printf("A = %.3E, B = %.3E\n", n1, n2);
	printf("C = %.3E, D = %.3E\n", n3, n4);

	// Processamento da saC-da nC:mero inteiro
	printf("A = %.0f, B = %.0f\n", n1, n2);
	printf("C = %.0lf, D = %.0lf\n", n3, n4);

	return 0;
}
