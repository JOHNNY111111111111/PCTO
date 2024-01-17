#include <stdio.h>
 
int main(){

    float a;
    float b;
    float c;

    printf("dimmi un numero\n");
    scanf("%f", &a);
    printf("dimmi un numero\n");
    scanf("%f", &b);
    printf("dimmi un numero\n");
    scanf("%f", &c);

    if( b - a == c - b){

        printf("sono ok\n");

    }else if( b - a != c - b){

        printf("non lo sono\n");
    }


    
    return 0;
}