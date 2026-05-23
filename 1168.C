/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Otávio Fernandes Caberlin - 195834
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1168
Data        : 19/05/2026
Objetivo    : Calcular quantos leds são necessário em um algarismo.
Aprendizado : Uso do switch para vários casos.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    
    // Declaração das variáveis
    int casos, soma;
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
            
            // Verificação de cada caractere pelo switch
            switch(numero[i]) {
                
                case '0':
                    soma = soma + 6;
                    break;
                    
                case '1':
                    soma = soma + 2;
                    break;
                    
                case '2':
                    soma = soma + 5;
                    break;
                    
                case '3':
                    soma = soma + 5;
                    break;
                    
                case '4':
                    soma = soma + 4;
                    break;
                    
                case '5':
                    soma = soma + 5;
                    break;
                    
                case '6':
                    soma = soma + 6;
                    break;
                    
                case '7':
                    soma = soma + 3;
                    break;
                    
                case '8':
                    soma = soma + 7;
                    break;
                    
                case '9':
                    soma = soma + 6;
                    break;
            }
        }
        
        // Processamento da saída
        printf("%d leds\n", soma);
    }

    return 0;
}
