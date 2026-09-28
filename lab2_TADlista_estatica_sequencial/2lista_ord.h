typedef struct lista *Lista;
Lista criar_lista();
int insere_ord(Lista lst, int elem);
int remove_ord(Lista lst, int elem);
int imprime_lista(Lista lst);
int obtem_valor_elem(Lista lst, int pos, int *elem);