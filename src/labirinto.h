#include "pilha.h"
#define MAXTAM 20

typedef struct Labirinto Labirinto;
typedef struct Posicao Posicao;


struct Labirinto {

    Posicao **map;
    int linha;
    int coluna;
};

struct Posicao {
    char valor;

    bool botao;
    bool e;
    bool d;
    
};



void Inicia(Labirinto *labirinto, int linha, int coluna);
void ImprimirLab(Labirinto *labirinto);
int PercorreLabirinto(Labirinto *labirinto, Pilha *p);
bool AbrirArquivo(Labirinto *labirinto);
void Finalizar(Labirinto *labirinto);
