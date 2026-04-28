/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Otávio Fernandes Caberlin - 195834
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1253
Data        : 23/04/2026
Objetivo    : Decodificação da "Cifra de César".
Aprendizado : Manipulação de caracteres deslocados no alfabeto.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    
    // Declaração das variáveis
    int N, i, j, deslocamento;
    char string[51];

    // Número de casos
    scanf("%d", &N); 

    // Repetição de casos
    for (i = 0; i < N; i++) {
        
        // Processamento das entradas 
        scanf("%s", string); 
        scanf("%d", &deslocamento); 
        
        // Percorre a string
        for (j = 0; string[j] != '\0'; j++) {
            
            // Voltando a letra
            string[j] = string[j] - deslocamento;
            
            // Caso seja menor que A
            if (string[j] < 'A') { 
                string[j] = string[j] + 26; 
            }
        }
        
        // Processamento da saída
        printf("%s\n", string); 
    }
    return 0;
}
