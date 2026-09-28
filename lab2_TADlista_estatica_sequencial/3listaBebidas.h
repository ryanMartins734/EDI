typedef struct bebida bebida;
typedef struct lista *Lista;
Lista criar_lista();
int inserirRegistro(Lista lst, char nome[], int volume, float preco);
int apagarUltimoRegistro(Lista lst);
int imprimirTabela(Lista lst);