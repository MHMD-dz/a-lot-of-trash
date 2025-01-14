#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//remp
float remplir(int size){
int i ;
float T[size];
    for ( i = 0 ; i < size ; i++){
    printf("entrez la valeur de T[%d] : ",i+1);
    scanf("%f",&T[i]);}
}
//croisant
void crw(float T[] , int size ){
int i , j ;
float temp ; 
    for ( i = 0; i < size; i++){
        temp = T[i] ;
        for ( j = 1 ; j < size ; j++){
        if (temp > T[j]){
        temp = T[j] ;
        T[j] = T[i] ;
        T[i] = temp ;
        }}}
    printf("\n croiasant : ");
    for ( i = 0 ; i < size ; i++){
    printf("\n T[%d] = %.2f", i+1 , T[i]);
    }
}
//decroisant
void dcrw(float T[] , int size ){
int i , j ;
float temp ; 
    for ( i = 0; i < size; i++){
        temp = T[i] ;
        for ( j = 1 ; j < size ; j++){
        if (temp < T[j]){
        temp = T[j] ;
        T[j] = T[i] ;
        T[i] = temp ;
        }}}
    printf("\n decroiasant : ");
    for ( i = 0 ; i < size ; i++){
    printf("\n T[%d] = %.2f", i+1 , T[i]);
    }}
// fonction de affichage 
void aff (float T[] , int size ){
int i ;
    for ( i = 0 ; i < 8 ; i++){
    printf("T[%d] = %d\n" , i+1 , T[i]);
    }
}
//the main code
int main(){
int size ;
float cr ;
    printf("\n enter the size of the tabel : ");
    scanf("%d",&size);
remplir(size);
cr = crw(remplir(size))
}