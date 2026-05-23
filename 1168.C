/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Otávio Fernandes Caberlin - 195834
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1168
Data        : 19/05/2026
Objetivo    : Calcular quantos leds são necessário em um algarismo.
Aprendizado : Relacionar itens em dois vetores e conversão tabela ASCII.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    
    // Declaração das variáveis
    int casos, soma;
    int leds[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    char numero[102];
    
    // Processamento número de casos
    scanf("%d", &casos);
    
    // Loop do número de casos
    for(int j = 0; j < casos; j++) {
        
        // Processamento de cada número
        scanf("%s", numero);
        soma = 0;
        
        // Loop na string que corresponde ao número
        for(int i = 0; numero[i] != '\0'; i++) {
            
            // Soma dos leds para cada caractere + transformação em número pela ASCII 
            soma = soma + leds[numero[i] - '0'];
        }
        
        // Processamento da saída
        printf("%d leds\n", soma);
    }

    return 0;
}
