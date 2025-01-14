#include<stdio.h>
#include<stdlib.h>

int main(){
    int n , p ,m , i , j , k , A[100][100] , B[100][100] , C[100][100] ;
    printf("donner la ligne de matrice A  : ");
    scanf("%d",&n);
    printf("donner la colonne de matrice A : ");
    scanf("%d",&p);
    printf("la ligne de matrice B est : %d \n",p);
    printf("donner la colonne de matrice B : ");
    scanf("%d",&m);
    printf("entrez le donner de matrice A : \n");
    for ( i = 0 ; i < n ; i++){
        for ( j = 0 ; j < p ; j++){
        printf("A[%d][%d] :",i+1 ,j+1 );
        scanf("%d",&A[i][j]);
        }
    }
    printf("entrez le donner de matrice B : \n");
    for ( i = 0 ; i < p ; i++){
        for ( j = 0 ; j < m ; j++){
        printf("B[%d][%d] :",i+1 ,j+1 );
        scanf("%d",&B[i][j]);
        }
    }
    for ( i = 0 ; i < n ; i++){
        for ( j = 0 ; j < m ; j++){
            C[i][j] = 0 ;
        for ( k = 0 ; k < p ; k++){
        C[i][j] = C[i][j] + (A[i][k] * B[k][j]);
        }
        }
    }
    printf("MATRICE A EST : \n ");
    for ( i = 0 ; i < n ; i++){
        for ( j = 0 ; j < p ; j++){
        printf(" %d ",A[i][j]);
        }
        printf("\n");
    }
    printf("MATRICE B EST : \n");
    for ( i = 0 ; i < p ; i++){
        for ( j = 0 ; j < m ; j++){
        printf(" %d ",B[i][j]);
        }
        printf("\n");
    }
    printf("MATRICE C = A * B EST : \n");
    for ( i = 0 ; i < n ; i++){
        for ( j = 0 ; j < m ; j++){
        printf(" %d  ",C[i][j]);
        }
        printf("\n");
    }
    }


