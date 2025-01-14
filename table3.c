#include<stdio.h>
#include<stdlib.h>

int main(){
   int T[10] , n1 , n2 , i ;
   for ( i = 0 ; i < 10 ; i++){
   printf("entrez la valeur de T[%d] : ", i+1);
   scanf("%d",&T[i]);
   }
   n1 = T[0] ;
   n2 = T[0] ;
   for ( i = 0 ; i < 10 ; i++ ){
        if (n1 < T[i]){
        n1 = T[i] ;
        }
   }
   for ( i = 0 ; i < 10 ; i++ ){
        if (n2 < T[i] && n1 != T[i]){
        n2 = T[i] ;
        }
    }
   printf("\n la premier grand element de table est : %d",n1);
   printf("\n la deuxiem grand element de table est : %d",n2);

}