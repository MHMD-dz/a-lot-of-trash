#include<stdio.h>
#include<stdlib.h>

int main(){
    int age ;
    printf("entrez l'age de votre enfant : ");
    scanf("%d",&age);
    if (6 <= age && age <= 7){
    printf("votre enfant est pouissin ");}
    else if (8 <= age && age <= 9){
    printf("votre enfant est pupille ");}
    else if (10 <= age && age <= 11){
    printf("votre enfant est minime ");}
    else if (10 <= age ){
    printf("votre enfant est cadet ");}
    
    
}