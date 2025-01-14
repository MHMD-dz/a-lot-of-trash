#include <stdlib.h>
#include <stdio.h>

void aff(int T[] , int size){
int i ;
printf("the new arre is\n");
for ( i = 0 ; i < size ; i++){
printf(" %d \t", T[i]);}}

void pass(int T[] , int first , int last ){
    int temp , i , j ;
    temp = T[last];
    i = first - 1 ;
    for (j = first ; j < last; j++){
    if (temp >= T[j]){
    temp = T[j] ;
    T[j] = T[last] ;
    
    }
    
    }
    
}


void tri_rapide(int T , int first , int last ){
    if (last > first){
    pass(T , first , last );

    }
    
}




/*
void tri_par_inserion_rec(int T[] , int i){
    int  j , temp ;
    if (i > 1 ){tri_par_inserion_rec(T , i-1);}
    temp = T[i] ;
    j = i - 1 ;
    while (temp < T[j] && j >= 0){
    T[j + 1] = T[j] ;
    j-- ;
    }
    T[j+1] = temp ;
    }
*/
/*
void tri_par_inserion(int T[] , int size ){
    int i , j , temp ;
    for ( i = 1 ; i < size ; i++){
    temp = T[i] ;
    j = i - 1 ;
    while (temp < T[j] && j >= 0){
    T[j + 1] = T[j] ;
    j-- ;
    }
    T[j+1] = temp ;}}*/
/*
void tri_par_selection_rec(int T[] , int size , int i){
    int temp  , j , k ;
    if (i < size){
        k = i ; 
    for ( j = i + 1 ; j < size ; j++){
        if (T[k] > T[j]){
        k = j ;}}
        temp = T[i] ;
        T[i] = T[k] ;
        T[k] = temp ;
        tri_par_selection_rec( T , size , i+1 );
    }}*/
/*
void tri_par_selection(int T[] , int size ){
    int i , j , temp , m ;
    for ( i = 0 ; i < size ; i++){
        m = i ;
        for ( j = i + 1 ; j < size ; j++){
        if (T[m] > T[j]){
        m = j ;}}
        temp = T[i] ;
        T[i] = T[m] ;
        T[m] = temp ;
    }
    
}
*/
int main(){
    int i , T[10] ;
    for (i = 0 ; i < 10 ; i++){
    printf("T[%d] : ",i+1);
    scanf("%d",&T[i]);}
    tri_par_inserion_rec( T ,  10 );
    aff( T , 10 );
    }