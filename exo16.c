#include<stdio.h>
#include<stdlib.h>
// moyenne

int main(){
    float not1 , not2 , not3 , moy ;
    // entre le donnre
    printf("entrez la note n°1 : ");
    scanf("%f",&not1);
    printf("entrez la note n°2 : ");
    scanf("%f",&not2);
    printf("entrez la note n°3 : ");
    scanf("%f",&not3);
    // les calcul
    moy = (not1 + not2 + not3) / 3 ;
    // verefe
    if((not1 < 0 || not1 > 20 ) || (not2 < 0 || not2 > 20 ) ||  (not3 < 0 || not3 > 20)){
        printf("\n ERROR \n entrez une note comprises entre 0 et 20 ");
    }
    
    // les affichage sur les categore
    else if (moy > 16 ){
    printf("\n tu moyenne est : %.2f \n mention : tres bien",moy);}
    else  if (moy > 14 && moy <= 16 ){
    printf("\n tu moyenne est : %.2f \n mention : bien",moy);}
    else  if (moy > 12 && moy <= 14 ){
    printf("\n tu moyenne est : %.2f \n mention : assez bien",moy);}
    else  if (moy > 10 && moy <= 12 ){
    printf("\n tu moyenne est : %.2f \n mention : passable",moy);}
    else  if (moy < 10 ){
    printf("\n tu moyenne est : %.2f \n mention : insuffisant",moy);}
    
}