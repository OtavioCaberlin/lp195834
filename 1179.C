/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Otávio Fernandes Caberlin - 195834
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1179
Data        : 19/05/2026
Objetivo    : Preencher vetores e imprimir seus valores e os elementos restantes.
Aprendizado : Uso do switch, como encher vetores, imprimir todos os valores restantes.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {

    // Declaração das variáveis
	int num, par[5], impar[5], contPar = 0, contImpar = 0;

    // Loop de leitura de todas as entradas
	for(int i = 0; i < 15; i++) {
        
        // Processamento da entrada
		scanf("%d", &num);

        // Análise se for par ou ímpar
		switch(num % 2) {
            
            // Se for par
		    case 0:

		    	par[contPar] = num;
			    contPar = contPar + 1;

                // Quando encher o vetor
			    if(contPar == 5) {

                    // Loop dos 5 valores do vetor
				    for(int j = 0; j < 5; j++) {
                        
                        // Processamento da saída
					    printf("par[%d] = %d\n", j, par[j]);
				    }

                // Reseta o vetor
				contPar = 0;
		    	}

			    break;
			    
            // Se for ímpar
		    default:

			    impar[contImpar] = num;
			    contImpar = contImpar + 1;

                // Quando encher o vetor
			    if(contImpar == 5) {

                    // Loop dos 5 valores do vetor
			    	for(int j = 0; j < 5; j++) {
                        
                        // Processamento da saída
				    	printf("impar[%d] = %d\n", j, impar[j]);
				    }

                    // Reseta o vetor
				    contImpar = 0;
		    	}

		    	break;
		}
	}

    // Valores pares que ficaram fora do vetor
	for(int i = 0; i < contImpar; i++) {

        // Processamento da saída
		printf("impar[%d] = %d\n", i, impar[i]);
	}

    // Valores ímpares que ficaram fora do vetor
	for(int i = 0; i < contPar; i++) {

        // Processamento da saída
		printf("par[%d] = %d\n", i, par[i]);
	}

	return 0;
}
