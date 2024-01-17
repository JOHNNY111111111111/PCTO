#include <stdio.h>

int main(){
    int a;
    int b;
    int c;
    int triangolo;


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



printf("ora vediamo che tipo è\n");

if(a == b && b == c){
    
    printf("equilatero\n");

    }else if((a == b && b != c) || (a == c && c!= b) || (b == c && c != b)){
        printf("isoscele\n");
    }
       
    
else {
    printf("scaleno\n");
}



return 0;
}



