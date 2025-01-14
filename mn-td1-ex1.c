#include<stdio.h>
#include<stdlib.h>

int main(){
    int n , m , i , j , A[100][100] , B[100][100] , C[100][100] ;
    printf("donner la colonne de matrice A et B : ");
    scanf("%d",&n);
    printf("donner la ligner de matrice A et B : ");
    scanf("%d",&m);
    printf("entrez le donner de matrice A : \n");
    for ( i = 0 ; i < n ; i++){
        for ( j = 0 ; j < m ; j++){
        printf("A[%d][%d] :",i+1 ,j+1 );
        scanf("%d",&A[i][j]);
        }
    }
    printf("entrez le donner de matrice B : \n");
    for ( i = 0 ; i < n ; i++){
        for ( j = 0 ; j < m ; j++){
        printf("B[%d][%d] :",i+1 ,j+1 );
        scanf("%d",&B[i][j]);
        }
    }
    for ( i = 0 ; i < n ; i++){
        for ( j = 0 ; j < m ; j++){
        C[i][j] = A[i][j] + B[i][j] ;
        }
    }
    //aff
    printf("MATRICE A EST : \n ");
    for ( i = 0 ; i < n ; i++){
        for ( j = 0 ; j < m ; j++){
        printf(" %d  ",A[i][j]);
        }
        printf("\n");
    }
    printf("MATRICE B EST : \n");
    for ( i = 0 ; i < n ; i++){
        for ( j = 0 ; j < m ; j++){
        printf(" %d  ",B[i][j]);
        }
        printf("\n");
    }
    printf("MATRICE C = A + B EST : \n");
    for ( i = 0 ; i < n ; i++){
        for ( j = 0 ; j < m ; j++){
        printf("%d  ",C[i][j]);
        }
        printf("\n");
    }
}