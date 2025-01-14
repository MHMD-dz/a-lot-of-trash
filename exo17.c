#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    // daclaration de la variable
    float a , b , c , x , x1 , x2 , d ;
    // entre de la donnner
    printf("entrez la valuer de a : ");
    scanf("%f",&a);
    printf("entrez la valuer de b : ");
    scanf("%f",&b);
    printf("entrez la valuer de c : ");
    scanf("%f",&c);
    // clacul 
    d = pow(b,2) - ( 4 * a * c );
    // l'affichage de solution
    if(d < 0){
        printf("la equation n'accepte pas de solutio \ncar delta = %.2f",d);}
        else if( d == 0 ){
            x = (-b) / (2 * a );
            printf("la equation accepte une solutio \nx = %.2f",x);}
            else if ( d  > 0 ){
                x1 = ( -b - sqrt(d) ) / (2 * a );
                x2 = ( -b + sqrt(d) ) / (2 * a );
                printf("la equation accepte deux solutio \nx1 = %.2f \net \nx2 = %.2f",x1 , x2);} 
            }
            