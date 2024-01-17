#include <stdio.h>

int main(){

    float celsius;

    printf("minchia se fa freddo quanti gradi ci sono?:\n");
    scanf("%f", &celsius);
    printf("convertiamo\n");
    
    if (celsius <= 273.15){
         printf("enniente mi so rotto\n");
    }
    else if(celsius >= 273.15){
        printf("fahrenheit %f\n", celsius * 9 / 5 + 32);
        printf("kelvin %f\n", celsius + 273.15);
    }
    
    return 0;

}