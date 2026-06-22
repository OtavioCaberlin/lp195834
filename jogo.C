/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Otávio Fernandes Caberlin - 195834
Linguagem   : C
Problema    : jogo.C
Data        : 11/06/2026
Objetivo    : Fazer um sudoku jogável.
Aprendizado : Como fazer a entrada de aquivo, verificação de sudoku, entradas para jogar.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {

    // Declaração das variáveis 
    int linha, coluna, soma;
    int m[100][100];

    // Loop até o fim das entradas
    while (scanf("%d %d", &linha, &coluna) != EOF) {

        // Processamento da matriz
        for (int i = 0; i < linha; i++) {
            
            for (int j = 0; j < coluna; j++) {
                
                scanf("%d", &m[i][j]);
            }
        }

        // Matriz com o números de pães de queijo
        for (int i = 0; i < linha; i++) {
            
            for (int j = 0; j < coluna; j++) {

                // Se o número for 1 (tem pão de queijo)
                if (m[i][j] == 1) {
                    
                    printf("9");
                } 

                // Se o número for 0 (não tem pão de queijo)
                else {

                    // Zera a soma a cada linha
                    soma = 0;

                    // Se a coluna não for maior que o máx existente e se a direita for 1
                    if (j + 1 < coluna && m[i][j + 1] == 1)
                        soma++;
                    // Se a coluna não for menor que o mín existente e se a esquerda for 1
                    if (j - 1 >= 0 && m[i][j - 1] == 1)
                        soma++;
                    // Se a linha não for maior que o máx existente e se embaixo for 1
                    if (i + 1 < linha && m[i + 1][j] == 1)
                        soma++;
                    // Se a linha não for menor que o mín existente e se em cima for 1
                    if (i - 1 >= 0 && m[i - 1][j] == 1)
                        soma++;
                    // Processamento de saída
                    printf("%d", soma);
                }
            }
            
            printf("\n");
        }
    }

    return 0;
}

#include <stdio.h>

int sudoku[9][9];
int travado[9][9]; 

int verificaLinha(int linha)
{
    int usado[10] = {0};
    for (int i = 0; i < 9; i++)
    {
        int num = sudoku[linha][i];
        if (num == 0) return 0;
        if (usado[num]) return 0;
        usado[num] = 1;
    }
    return 1;
}

int verificaColuna(int coluna)
{
    int usado[10] = {0};
    for (int i = 0; i < 9; i++)
    {
        int num = sudoku[i][coluna];
        if (num == 0) return 0;
        if (usado[num]) return 0;
        usado[num] = 1;
    }
    return 1;
}

int verificaBloco(int linhaInicial, int colunaInicial)
{
    int usado[10] = {0};
    for (int i = linhaInicial; i < linhaInicial + 3; i++)
    {
        for (int j = colunaInicial; j < colunaInicial + 3; j++)
        {
            int num = sudoku[i][j];
            if (num == 0) return 0;
            if (usado[num]) return 0;
            usado[num] = 1;
        }
    }
    return 1;
}

int jogoCompleto()
{
    for (int i = 0; i < 9; i++)
    {
        if (!verificaLinha(i) || !verificaColuna(i))
            return 0;
    }
    for (int linha = 0; linha < 9; linha += 3)
    {
        for (int coluna = 0; coluna < 9; coluna += 3)
        {
            if (!verificaBloco(linha, coluna))
                return 0;
        }
    }
    return 1;
}

int jogadaValida(int linha, int coluna, int num)
{
    for (int j = 0; j < 9; j++)
    {
        if (j != coluna && sudoku[linha][j] == num)
            return 0;
    }
    for (int i = 0; i < 9; i++)
    {
        if (i != linha && sudoku[i][coluna] == num)
            return 0;
    }
    int linhaInicial = (linha / 3) * 3;
    int colunaInicial = (coluna / 3) * 3;
    for (int i = linhaInicial; i < linhaInicial + 3; i++)
    {
        for (int j = colunaInicial; j < colunaInicial + 3; j++)
        {
            if ((i != linha || j != coluna) && sudoku[i][j] == num)
                return 0;
        }
    }
    return 1;
}

void exibeTabuleiro()
{
    printf("\n    ");
    for (int j = 0; j < 9; j++)
    {
        if (j == 3 || j == 6) printf("  ");
        printf("Col%d ", j + 1);
    }
    printf("\n");

    printf("    ");
    for (int j = 0; j < 9; j++)
    {
        if (j == 3 || j == 6) printf("  ");
        printf("----- ");
    }
    printf("\n");

    for (int i = 0; i < 9; i++)
    {
        if (i == 3 || i == 6)
            printf("\n");

        printf("L%d |", i + 1);

        for (int j = 0; j < 9; j++)
        {
            if (j == 3 || j == 6) printf("  ");
            if (sudoku[i][j] == 0)
                printf("  [ ] ");
            else if (travado[i][j])
                printf("  <%d> ", sudoku[i][j]);
            else
                printf("  [%d] ", sudoku[i][j]);
        }
        printf("\n");
    }
    printf("\n  Legenda: <N> = numero original  |  [N] = sua jogada  |  [ ] = vazio\n\n");
}

int carregarArquivo(const char *nomeArquivo)
{
    FILE *arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL)
    {
        printf("Erro: nao foi possivel abrir o arquivo '%s'.\n", nomeArquivo);
        return 0;
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (fscanf(arquivo, "%d", &sudoku[i][j]) != 1)
            {
                printf("Erro: arquivo com formato invalido.\n");
                fclose(arquivo);
                return 0;
            }
            travado[i][j] = (sudoku[i][j] != 0) ? 1 : 0;
        }
    }

    fclose(arquivo);
    return 1;
}

int main()
{
    char nomeArquivo[100];

    printf("===========================================\n");
    printf("          BEM-VINDO AO SUDOKU!             \n");
    printf("===========================================\n\n");

    printf("Digite o nome do arquivo com o puzzle: ");
    scanf("%s", nomeArquivo);

    if (!carregarArquivo(nomeArquivo))
        return 1;

    printf("\nPuzzle carregado com sucesso!\n");
    printf("Preencha as casas marcadas com [ ].\n");
    printf("Digite 0 em qualquer campo para sair.\n");

    exibeTabuleiro();

    while (!jogoCompleto())
    {
        int linha, coluna, numero;

        printf("Digite a linha  (1-9): ");
        scanf("%d", &linha);
        if (linha == 0) break;

        printf("Digite a coluna (1-9): ");
        scanf("%d", &coluna);
        if (coluna == 0) break;

        printf("Digite o numero (1-9): ");
        scanf("%d", &numero);
        if (numero == 0) break;

        if (linha < 1 || linha > 9 || coluna < 1 || coluna > 9 || numero < 1 || numero > 9)
        {
            printf("\nValores invalidos! Linha, coluna e numero devem estar entre 1 e 9.\n\n");
            continue;
        }

        int l = linha - 1;
        int c = coluna - 1;

        if (sudoku[l][c] != 0)
        {
            printf("\nEssa casa ja esta preenchida, tente novamente.\n\n");
            continue;
        }

        if (!jogadaValida(l, c, numero))
        {
            printf("\nVoce errou, tente novamente.\n\n");
            continue;
        }

        sudoku[l][c] = numero;
        printf("\nVoce acertou, parabens!\n\n");

        exibeTabuleiro();
    }

    if (jogoCompleto())
        printf("Sudoku concluido. Fim de jogo.\n");
    else
        printf("\nJogo encerrado. Ate a proxima!\n");

    return 0;
}
