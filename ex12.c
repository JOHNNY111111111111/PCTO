#include <stdio.h>

int main(){

    int a;
    int b;

    printf("in che anno sei nato?\n");
    scanf("%d", &a );
    

    if(a>1969){
        printf("sei nato %d", a-1969);
        printf("anni dopo l'allunaggio\n");
    }else if(a<1969){
        printf("sei nato %d", 1969 - a );
        printf("anni prima l'allunaggio\n");
    }else{
        printf("stesso anno\n");
    }

    return 0;
}