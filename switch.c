#include<stdio.h>
#include<stdlib.h>

int main(){
    // declaaaaaaaa
    char cat ;
    float prix ;
    //donner
    printf("entrez la prix de produit : ");
    scanf("%f",&prix);
    printf("entrez la categories de la produit : ");
    scanf(" %c",&cat);
    //aff
   // if(cat == 'a'){
   //     prix = prix + prix * 0.07 ;}
   //     else if(cat == 'b'){
   //         prix = prix + prix * 0.2 ;}
   //         else if(cat == 'c'){
   //             prix = prix + prix * 0.25 ;}
   switch(cat) {
        case 'a' : printf("la prix apre la taxe est : %.3f DA",prix + prix * 0.07);
        break;
        case 'b' : printf("la prix apre la taxe est : %.3f DA",prix + prix * 0.2);
        break;
        case 'c' : printf("la prix apre la taxe est : %.3f DA",prix + prix * 0.25);
        break;
        default  : printf("la categore n'exest pas ");
        break;
}


    
    }