#include <stdlib.h>
#include "nodo.h"

void stampa(Nodo *head){
    
    Nodo *temp;
    temp=head;
    if(temp!=NULL){
        printf("\n");
        while(temp!=NULL){
            printf("%d ",temp->val);
            temp=temp->next;
        }
    }else{
        printf("NULL");
    }
    
}