#include "labirinto.h"
#include <locale.h>

int main() {

    Pilha P;
    Item I;
    Labirinto L;
    int linhas=0, colunas=0, it = 0;

    setlocale(LC_ALL,"Portuguese");

    FPVazia(&P);
    InicializaItem(&I);
    PUSH(&P, I);

    printf("Número de linhas: ");
    scanf("%d", &linhas);
    printf("Número de colunas: ");
    scanf("%d", &colunas);
    
    Inicia(&L, linhas, colunas);
    AbrirArquivo(&L);
    printf("\n");

    ImprimirLab(&L);

    it = PercorreLabirinto(&L, &P);
    printf("\nQuantidade de iterações: %d\n", it);
    return 0;
}