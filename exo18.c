#include<stdio.h>
#include<stdlib.h>

int main(){
    // declaration de la variable 
    char sexe ;
    int age ;
    // entrez de les donner
    printf("entrez votre l'age : ");
    scanf(" %d",&age);
    printf("entrez votre sexe \nsi tu es une famme entrez f ou h pour les homme : ");
    scanf(" %c",&sexe);
    // verefecation 
    if( (age >= 20 && sexe == 'h' ) || (age >= 18 && age <= 35 && sexe == 'f')){
        printf("you are imposable ");}
        else
        { printf("you aren't imposable");}
        
}