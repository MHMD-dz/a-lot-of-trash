#include<stdio.h>
#include<stdlib.h>

int main(){
    int  nmb , v , i , x ;
    scanf("donner la taller de table T : %d",&v);
    scanf("donner la taller de table T : %d",&v);
    int T[v] ;
    for ( i = 0 ; i < v ; i++ ){
    printf("entrez la valeur de T[%d] : " , i+1 );
    scanf("%d",&T[i]);
    }
    printf("seppremer la nombre : ");
    scanf("%d",&x);
    for ( i = 0 ; i < v ; i++)
    {
    if (T[i] == x ){
    T[i] = T[i+1] ;
    x = T[i+1] ;
    }
    
    }
    
    

}