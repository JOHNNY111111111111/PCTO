#include <stdio.h>
 
int main(){

    int nick;
    int anto;

    printf("quanti anni ha nick?:\n");
    scanf("%d", &nick);
    printf("anto quanti anni ha?");
    scanf("%d", &anto);
    if(nick > anto){
        printf("nick è più grande di anto\n");
    }else if(nick < anto){
        printf("nick è più piccolo di anto\n");
    }else if(nick = anto){
        printf("hanno la stessa eta\n");
    }
    
    return 0;
}