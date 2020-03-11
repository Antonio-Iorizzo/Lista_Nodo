#include <stdio.h>
#include "nodo.h"

int main()
{
    Nodo *head;
    head=NULL;
    
    stampa(head);
    
    Nodo n1;
    n1.val=7;
    n1.next=NULL;
    head=&n1;
    
    stampa(head);
    
    Nodo n2;
    n2.val=10;
    n2.next=NULL;
    n1.next=&n2;
    
    stampa(head);
    
    Nodo n3;
    n3.val=6;
    n3.next=NULL;
    n3.next=head;
    head=&n3;
    
    stampa(head);
    
    Nodo n4;
    n4.val=4;
    n4.next=NULL;
    n4.next=head;
    head=&n4;
    
    stampa(head);
    

    return 0;
}


