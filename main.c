#include <stdio.h>
#include "spesa.h"
#include "spesa.c"


int main(void){

    //grafica iniziale
    printf("\n");
    printf("");
    printf("Ciao pisellone! benvenuto nella beta");
    printf("\n");
    printf("\n");
    printf("╔════════════════════════╗\n");
    printf("║    EXPENSE TRACKER     ║\n");
    printf("╚════════════════════════╝\n");
    printf("\n");
    //salvataggio spese
    Spesa spese[100];
    int numerospese;
    //meccanismo di scelta
    int scelta;
    do{
        puts("1. Aggiungi una Spesa");
        puts("2. Visualizza le Spese");
        puts("3. Cancella una Spesa");
        puts("0. Esci");

        if((scanf("%d",&scelta) !=1 )||(scelta<0 || scelta>3)){ //scanf restituisce il numero di valori assegnati
            printf("devi inserire un intero compreso tra 0 e 3 ");
            break;
        }

        switch(scelta){
            case 1:
                puts("Aggiunta spesa");
                break;

            case 2:
                puts("Visualizzazione spese");
                break;

            case 3:
                puts("Cancellazione spesa");
                break;

            case 0:
                puts("bye bye nigga!");
                break;

        }

    }while(scelta!=0);
    

    return 0;
}
