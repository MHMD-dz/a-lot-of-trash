#include<stdio.h>
#include<stdlib.h>
#include<math.h>
// fonction max
float max(float T[] , int size){
    int i ;
    float maax ;
    maax = T[0] ;
    for( i = 0 ; i < size ; i++ ){
        if ( maax < T[i] ){
        maax = T[i] ;}}
    return maax ;}
// min fonction
float min(float T[] , int size){
    int i ;
    float miin ;
    miin = T[0] ;
    for( i = 0 ; i < size ; i++ ){
        if ( miin > T[i] ){
        miin = T[i] ;}}
    return miin ;}
// inverse fonction
void inv(float T[] , int size){
    float I[size] ;
    int i ;
    for ( i = 0 ; i < size ; i++){
    I[i] = T[size-1-i];} 
    for ( i = 0 ; i < size ; i++){
    printf("\n T[%d] = %.2f",i+1 , I[i]);}}
//the main code
int main(){
    float T[10] , maxx , mini ;
    int i ;
    for (i = 0 ; i < 10 ; i++ ){
    printf("entrez la valeur de T[%d] : ", i+1 );
    scanf("%f",&T[i]);
    }
    mini = min( T , 10 );
    maxx = max( T , 10 );
    //invi = inv( T , 10 );
    printf("\n the max est : %.2f",maxx);
    printf("\n the min est : %.2f",mini);
    printf("\n the inverse est : ") ;
    inv( T , 10 );}