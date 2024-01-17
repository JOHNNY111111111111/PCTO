#include <stdio.h>

void min(){

    float a;
    float tempo, sqrt;
    printf("numero\n");
    scanf("%f", &a);
    sqrt = a / 2;
    tempo = 0;  
    while(sqrt != tempo){
        tempo=sqrt;
        sqrt=(a/tempo + tempo)/2;
    }
    printf("la radice di %f è %f\n", a , sqrt);
}
int main(){
    
    min();
    min();
    min();
    return 0;
}