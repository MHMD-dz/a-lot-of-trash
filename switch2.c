#include<stdio.h>
#include<stdlib.h>

int main(){
    int A , b ;
    float x ;
    char op ;
    printf("entrez la valeur de A et b : ");
    scanf("%d \n%d", &A , &b );
    printf("donner la operateur : ");
    scanf(" %c",&op);
    switch (op){
    case '+' :printf(" %d %c %d = %.2f ", A , op , b , x=A+b );
        break;
    case '-' :   printf(" %d %c %d = %.2f ", A , op , b , x=A-b );

        break;
    case '*' : printf(" %d %c %d = %.2f ", A , op , b , x=A*b );
        break;
    case '/' : printf(" %d %c %d = %.2f ", A , op , b , x=A/b );
        break;        
    default : printf("ERROR");
        break;
    }
}