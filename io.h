Cartas* tratamento_leitura(FILE* , char *, Cartas* );
void print_mao(Cartas* , FILE* , int );
void add_lixo(Cartas* , FILE* , char *, int );
void print_GET_DISCARD(Cartas* , int , FILE* );
Cartas* add_lixo_mao(Cartas* , Cartas* , FILE* , int , int , int );
void fuc_nossa_mesa(Cartas **, Cartas* , FILE*  , int , int , int );
Cartas** abaixa_mesa(Cartas **, Cartas* , FILE* , int , int , int* , int , int , int );
void print_total_mesa(Cartas **, FILE* , int , int , int *);
void print_GET_STOCK(Cartas *, FILE* , char *); 
void print_MELD_NEW(Cartas* , FILE* , int , int , int );
Cartas** condicoes_MELD_NEW(Cartas* , Cartas **, int *, FILE* , int , int );
void print_MELD_JOIN(Cartas* , FILE* , int , int );
void condicoes_MELD_JOIN(Cartas* , FILE* , Cartas **, int *, int , int );
void print_DISCARD(Cartas* , FILE* , int );
void condicoes_DISCARD(Cartas* , Cartas *, FILE* , int , int , Cartas* );