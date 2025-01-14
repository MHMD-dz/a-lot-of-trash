#include<stdio.h>
#include<stdlib.h>
#include<math.h>
// somme fonction
int somme(int T[] , int size){
int i , s ;
s = 0 ;
    for ( i = 0 ; i < size ; i++){
    s = s + T[i];}
    return s ;}
// produit fonction
int prod(int T[] , int size ){
int i , p ;
p = 1 ;
    for ( i = 0 ; i < size ; i++){
    p = p * T[i];}
    return p ;}
// moyen fonction
float moyen(int som , int size){
float m ;
    m =  (float)som / size ;
    return m ;}
// pos et nig fonction
void pos_et_nig(int T[] , int size){
int i ;
    for ( i = 0 ; i < size ; i++){
    if (T[i] >= 0){
    printf("\n la valeur de T[%d] est positive ", i+1);}
    else{
    printf("\n la valeur de T[%d] est nigative ", i+1);
    }}}
// the main code
int main(){
    int i , T[10] , prd , som ;
    float moy ;
    for ( i = 0 ; i < 10 ; i++ ){
    printf("donner la valeur de T[%d] : ",i+1);
    scanf("%d",&T[i]);}
    som = somme(T , 10 );
    prd = prod(T , 10 );
    moy = moyen(som , 10 );
    printf("La somme des elements du tableau est : %d\n", som);
    printf("Le produit des elements du tableau est : %d\n", prd);
    printf("La moyenne des elements du tableau est : %.2f\n", moy);
    pos_et_nig(T , 10);}