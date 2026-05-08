/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Otávio Fernandes Caberlin - 195834
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1024
Data        : 07/05/2026
Objetivo    : .
Aprendizado : .
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>

int main() {

    // Declaração das variáveis
    int N, tamanho, metade;
    char texto[1001], invertido[1001];

    // Processamento das entradas
    scanf("%d", &N);
    getchar(); 

    for(int i = 0; i < N; i++) {

        fgets(texto, 1001, stdin);

        tamanho = strlen(texto);

        // Remove o '\n'
        if(texto[tamanho - 1] == '\n') {
            texto[tamanho - 1] = '\0';
            tamanho--;
        }

        // Desloca 3 posições para a direita
        for(int j = 0; j < tamanho; j++) {

            if((texto[j] >= 'A' && texto[j] <= 'Z') ||
               (texto[j] >= 'a' && texto[j] <= 'z')) {

                texto[j] = texto[j] + 3;
            }
        }

        // Inverte a string
        for(int j = 0; j < tamanho; j++) {
            invertido[j] = texto[tamanho - 1 - j];
        }

        // Fim da string
        invertido[tamanho] = '\0'; 

        // Desloca 1 para a esquerda da metade para frente
        metade = tamanho / 2;

        for(int j = metade; j < tamanho; j++) {
            invertido[j] = invertido[j] - 1;
        }

        // Processamento da saída
        printf("%s\n", invertido);
    }

    return 0;
}
