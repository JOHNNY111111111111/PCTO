#include <stdio.h>

int main(){

    int utente;
    int paese;
    printf("a che anni si prende la patente da te?:\n");
    scanf("%d", &paese);
    printf("quanti anni hai?:\n");
    scanf("%d", &utente);
    

    if(utente < paese){
        
        printf("non puoi guidare mi spiace\n");

    }else if(utente > paese){

        printf("daje puoi guidare\n");
    }

    return 0;
}