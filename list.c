#include <stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct trying{
    int age ;
    struct trying *suiv ;
}trying;

trying* info(int age ){
    trying* new = (trying*)(malloc(sizeof(trying)));
    new->age = age ; 
    return new ;
}

trying* add(trying* tete, int p) {
    trying* new = info(p);
    if (tete != NULL) {
        new->suiv = tete; 
    }
    tete = new; 
    return tete;
    
}

void aff(trying* tete){
    trying* temp ;
    temp = tete ;
    while (temp != NULL){
    printf("the age is : %d \n ",temp->age);
    temp = temp->suiv ;
    }
    
}


int main(){
    trying* tete ;
    trying* first = info(20);
    trying* second = info(25) ;
    trying* last = info(30);
    tete = first ;
    first->suiv = second ;
    second->suiv = last;
    last->suiv= NULL;
    tete = add(tete,15) ;
    aff(tete);
}