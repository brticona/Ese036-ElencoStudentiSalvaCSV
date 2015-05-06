#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definisci le costanti
#define N 3
#define MAX_STRLEN 30
#define FNAME "elenco.csv"

// Definisci il tipo di dato struct s_studente
struct s_studente {
    char nome[MAX_STRLEN+1];
    char cognome[MAX_STRLEN+1];
    int eta;
    char classe[MAX_STRLEN+1];
};

// Definisci studente come struct s_studente
typedef struct s_studente studente;

int main(int argc, char** argv) {
    int i;
    FILE *outfile;
    studente v;
    
    outfile = fopen(FNAME,"w");
    
    fprintf(outfile,"nome;cognome;eta;classe\n");
        
        for(i=0;i<N;i++){
            printf("Inserisci il nome del %d° alunno: ",i+1);
            scanf("%s", v.nome);
            fprintf(outfile,"%s;",v.nome);
            printf("Inserisci il cognome del %d° alunno: ",i+1);
            scanf("%s", v.cognome);
            fprintf(outfile,"%s;",v.cognome);
            printf("Inserisci l'eta' del %d° alunno: ",i+1);
            scanf("%d", &v.eta);
            fprintf(outfile,"%d;",v.eta);
            printf("Inserisci la classe del %d° alunno: ",i+1);
            scanf("%s", v.classe);
            fprintf(outfile,"%s\n",v.classe);
            printf("\n");
        }
        
        fclose(outfile);
    
    
        
    
    return (EXIT_SUCCESS);
}