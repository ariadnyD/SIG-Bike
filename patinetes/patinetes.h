#ifndef PATINETES_H
#define PATINETES_H

typedef struct patinete {
    int id;
    char modelo[51];
    char cor[51];
    char marca[51];
    int ano;
    int bateria;
    int status;
    int tipo;
} Patinete;

void patinetes(void);
Patinete* preenchePatinete(int id);
int obterProximoID();
Patinete* pesquisarPatinete(void);
void exibePatinete(Patinete* pat);
void atualizarPatinete(void);
void regravarPatinete(Patinete* patinete);
void deletarPatinete();

#endif