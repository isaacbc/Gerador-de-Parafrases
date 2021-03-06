typedef int tipoinfo;

struct TNodoA{
        tipoinfo info;
        struct TNodoA *esq;
        struct TNodoA *dir;
};

typedef struct TNodoA pNodoA;

pNodoA* InsereArvore(pNodoA *a, tipoinfo ch);
void preFixadoE(pNodoA *a);
void preFixadoD(pNodoA *a);
void posFixadoE(pNodoA *a);
void posFixadoD(pNodoA *a);
void CentralE(pNodoA *a);
void CentralD(pNodoA *a);
pNodoA* consultaABP(pNodoA *a, tipoinfo chave);
pNodoA* consultaABP2(pNodoA *a, tipoinfo chave);
