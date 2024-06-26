#define MAX 5
struct pessoa {
    int codigo;
    char nome[30];
    int idade;
};

typedef struct fila Fila;
Fila*cria_fila();
void libera_fila(Fila*fi);
int consulta_fila(Fila*fi, struct pessoa*pe);
int insere_fila(Fila*fi, struct pessoa*pe);
int remove_fila(Fila*fi);
int tamanho_fila(Fila*fi);
int fila_vazia(Fila*fi);
int fila_cheia(Fila*fi);


