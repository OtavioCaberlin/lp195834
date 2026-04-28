/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Otávio Fernandes Caberlin - 195834
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1234
Data        : 23/04/2026
Objetivo    : Transformar uma sentença qualquer em dançante (maiúsculas e minúscula alternadas).
Aprendizado : Uso strings com fgets, alternância de maiúsculas e minúsculas.
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <ctype.h>

int main() {
    
    // Declaração da variável
    char string[51];

    // Leitura das linhas
    while (fgets(string, 51, stdin) != NULL) {
        
        // Controle de maiúscula e minúscula
        int letra = 1; 
        
        // Percorre a string
        for (int i = 0; string[i] != '\0'; i++) {
            
            if (string[i] != ' ') {
                
                // Deixa maiúscula
                if (letra == 1) {
                    string[i] = toupper(string[i]);
                    letra = 0;
                } 
                
                // Deixa minúscula
                else {
                    string[i] = tolower(string[i]);
                    letra = 1;
                }
            }
        }
        // Processamento da saída 
        printf("%s", string);
    }
    return 0;
}
