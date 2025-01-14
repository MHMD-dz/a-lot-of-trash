#include<stdio.h>
#include<stdlib.h>

int main(){
    int T[10] , n , i , x ;
    x = 0 ;
    for ( i = 0 ; i < 10 ; i++ ){
    printf("entrez la valeur de T[%d] : " , i+1 );
    scanf("%d",&T[i]);
    }
    printf("donner la nombre n : ");
    scanf("%d",&n);
    for ( i = 0 ; i < 10 ; i++ ){
    if ( n == T[i]){
    x++ ;
    }}
    if (x == 0){
    printf("\n %d ne se trouve pas dans le table ",n);
    }
    else{
    printf("\n %d se trouve dans le table %d foia ",n , x);
    }
    
    
}