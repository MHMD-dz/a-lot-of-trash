#include<stdio.h>
#include<stdlib.h>
int main(){
    int T[8] , i , j , temp ;
    for ( i = 0 ; i < 8 ; i++ ){
    printf("entrez la valeur de T[%d] : " , i+1);
    scanf("%d",&T[i]);
    }
    temp = 0;
    for ( i = 0 ; i < 8 ; i++){
        
        for ( j = i+1 ; j < 8 ; j++){
        if (T[i] > T[j] ) {
            temp = T[i] ;
            T[i] = T[j] ;
            T[j] = temp ;
        
        }
        }
    }
    for ( i = 0 ; i < 8 ; i++)
    {
    printf("T[%d] = %d\n" , i+1 , T[i]);
    }
    
}