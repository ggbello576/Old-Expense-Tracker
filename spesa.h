//l'head del file spesa

#ifndef SPESA_H
#define SPESA_H

//categorie

typedef enum{
    Casa,
    Utenze,
    Alimentari,
    Veicolo,
    Trasporti,
    Salute,
    Sport,
    Istruzione,
    Tecnologia,
    Abbonamenti,
    Intrattenimento,
    Investimenti,
    Trasferimenti,
    Hobby,
    Debiti,
    Gambling,
    Alcol,
    Droga,
}   Categoria;

//struttura di ogni categoria

typedef struct{
    int id;
    float importo;
    char descrizione [104];
    Categoria Categoria;
    int giorno;
    int mese;
    int anno;

} Spesa;

void aggiungiSpesa(void);
void mostraSpese(void);

#endif

