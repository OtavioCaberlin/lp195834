

#include <stdio.h>
#include <string.h>

int main() {

	// Declaração das variáveis
	int n;
	char A[1001], B[1001];

	// Processamento de entrada
	scanf("%d", &n);

	// Loop para cada caso de teste
	for(int i = 0; i < n; i++) {
		scanf("%s %s", A, B);
		
		// Tamanho das strings
		int tamA = strlen(A);
		int tamB = strlen(B);
		
		// Conta quantos caracteres são iguais
		int iguais = 0;
		
		// Se B for maior que A
		if(tamB > tamA) {
			printf("nao encaixa\n");
		}
		else {
		    
			// Compara o final
			for(int j = 1; j <= tamB; j++) {
			    
				if(A[tamA - j] == B[tamB - j]) {
					iguais++;
				}
			}
			
			// Se todos os caracteres forem iguais
			if(iguais == tamB) {
				printf("encaixa\n");
			}
			else
				printf("nao encaixa\n");
		}
	}

	return 0;
}
