#include<stdio.h>
#include<stdlib.h>

int main(){
    float table1[3] , table2[3] , s[3] , som ;
    int i ;
    for ( i = 0; i < 3 ; i++){
    printf("entrez la valeur N°%d de table 1 : ",i+1);
    scanf("%f",&table1[i]);
    printf("entrez la valeur N°%d de table 2 : ",i+1);
    scanf("%f",&table2[i]);
    }
    for ( i = 0 ; i < 3 ; i++ ){
    s[i] = table1[i] * table2[i] ;
    som += s[i] ;
    printf("\n la produit des les vectur est  T[%d] = %.2f", i + 1 ,s[i]);

    }
    
    printf("\n la somme est : %.2f",som);

    }