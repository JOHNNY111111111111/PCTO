#include <stdio.h>

int main(){
    
    float numero;
    float numerob;
    int i;
    i = 0;
    printf("dimme un numero\n");
    scanf("%f", &numero);
    while(numero > 0 && numerob > 0){
        i = i + 1;
        numero = numero + numerob;
        printf("ecco la media %f\n",numero / i);
        printf("dimmi un numero\n");
        scanf("%f", &numerob);  
    }
    return 0;
}