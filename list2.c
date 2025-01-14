#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct etudio{
    char nom[50] ;
    int age ;
    float moy ;
    struct etudio *suiv ;
}etudio;

etudio* cree_and_enter(){
    etudio* new = (etudio*)malloc(sizeof(etudio));
    printf("enter the name : ");
    scanf(" %[^\n]",&(*new).nom);
    printf("enter the age :");
    scanf("%d",&((*new).age));
    printf("enter the moyen : ");
    scanf("%f",&((*new).moy));
    new->suiv = NULL ;
    return new ;
}

void aff(etudio* tete){
    etudio* hi ;
    hi = tete ;
    while (hi != NULL){
    printf("NAME : %s  AGE : %d  MOYENN : %.2f \n",hi->nom,hi->age,hi->moy);
    hi = hi->suiv ;
    }}

void calc(etudio* tete){
    etudio* temp ;
    int p = 0 ;
    temp = tete ;
    while ( temp != NULL ){
    p++;
    temp = temp->suiv;
    }
    printf(" \n ther is %d maillon in the list \n",p);
}

int serch(etudio* tete , int n){
    etudio* temp ;
    temp = tete ;

    while (temp->suiv != NULL){
    if (temp->age == n){
    return 1 ;
    }
    temp = temp->suiv ;}
    return -1 ;
}



int main(){
    int n ;
    
    etudio* tete = NULL;
    etudio* first = cree_and_enter();
    etudio* second = cree_and_enter();
    etudio* therd = cree_and_enter();
    etudio* last = cree_and_enter();
    tete = first ;
    (first->suiv) = second ;
    (second->suiv) = therd;
    (therd->suiv) = last;
    last->suiv = NULL ;
    printf("\n enter the age u serching for : ");
    scanf("%d",&n);
    aff(tete);
    calc(tete);
    if (serch(tete,n) > 0){
    printf("the nomber %d exist");
    }
    else
    {
    printf("\nthe nomber %d dosn't exist");
    }
     

}