#define MAX 5
struct livro {
    int codigo;
    char titulo[30];
    int qtdpaginas;
};
typedef struct pilha Pilha;

Pilha*cria_pilha();
void libera_pilha(Pilha*pi);
int acessa_topo_pilha(Pilha*pi, struct livro*li);
int incere_pilha(Pilha*pi, struct livro*li);
int remove_pilha(Pilha*pi);
int tamanho_pilha(Pilha*pi);
int pilha_vazia(Pilha*pi);
int pilha_cheia(Pilha*pi);