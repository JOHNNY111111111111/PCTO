#include <stdio.h>

int main(){

    int number;
    int numero;

    printf("dimmi un numero:\n");
    scanf("%d", &numero);
    printf("dimmene un altro va:\n");
    scanf("%d", &number);

    if(number / numero == 0){
        
        printf("si è un multiplo\n");

    }else if(number / numero != 0){
      
        printf("nope\n");
    }
        return 0;
    
}