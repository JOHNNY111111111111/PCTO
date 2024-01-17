#include <stdio.h>

int main(){

    int anno;

    printf("dimmi un anno e vedrai\n");
    scanf("%d", &anno);
    printf("ora capiremo se è bisestile\n");
    if(anno % 4 == 0)
        if(anno % 400 == 0){
        printf("si lo è\n");
        }
        else if(anno % 100 != 0){
        printf("beh si è bisestile\n");
        }
        
        

    
        
    else {
        printf("non lo è\n");
    }

    return 0;
    
}