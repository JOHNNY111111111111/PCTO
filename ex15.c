#include <stdio.h>

void cacu(){

    int numero;
    int cubo;
    printf("numero\n");
    scanf("%d", &numero );
    cubo = numero * numero * numero;
    printf("il cubo di %d è %d\n", numero, cubo);
   
}
int main(){
    int i = 0;
    

    while(i < 4 ){
        cacu();
        i = i + 1;

    }
    
    return 0;
}