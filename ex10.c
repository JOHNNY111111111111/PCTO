#include <stdio.h>

int main(){

    int a;
    int b;
    int c;


    printf("dammi tre lati\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a + b > c){
    if(a + c > b){
    if(b + c > a){
        printf("si lo è\n");
    }else{
        printf("si non lo è \n");
    }
    
    }else{
        printf("non lo è senza si \n");
    }
    
   
    
        
    }else{
        printf("non lo è\n");
    }

    return 0;
   
}