#include<stdlib.h>
#include<stdio.h>
#include<string.h>
typedef struct {
    char nom[50] ;
    char stad[50] ;
    char entr[50] ;
    int pay ;
}equip;
typedef struct {
    int nbr ;
    char name [50];
    char place [50] ;
    equip eq ;
}player ;

void nom_equip(player *p , int size){
    int i ;
    for ( i = 0; i < size ; i++){
    printf("\nla nom de joure %d est : %s",i+1,p[i].name);
    printf("\nla nom de equipe de joure n%d est : %s",i+1,p[i].eq.nom);
    }  
}

void jr_att(player *p , int size){
    int i ;
    for ( i = 0; i < size ; i++){
    if (p[i].place == "attaq"){
    printf("\nle joure n%d est un attaqer");}}
}

void chan(player *p){
    printf("\nenter the new team name\n");
    scanf(" %[^\n]",p->eq.nom);
    printf("\nenter the new nombre foe the joure\n");
    scanf("%d",&p->nbr);
}




int main(){
    
    equip eq [4] = {
        {"mco" , "zabana" , "mohamed" , 2000},
        {"fcb" , "bernan" , "blabla" , 2000},
        {"mca" , "alger" , "hachem" , 21014},
        {"jsk" , "tizouz" , "mokran" , 356454}
    };
    player pl[4] = {
        { 22 , "mohamed" , "attaq" , eq[0]},
        { 15 , "misse" , "attaq" , eq[1]},
        { 7 , "ronaldo" , "defence" , eq[2]},
        { 10 , "mehrez" , "middel" , eq[3]}
    };
    
    
    
    nom_equip(&pl,4);
    jr_att(&pl,4);
    chan(&pl);


    
    
    
    
    int i ;
    for ( i = 0 ; i < 2 ; i++){
    printf("donne la nambre de joure %d : ",i+1);
    scanf("%d",&p[i].nbr);
    printf("donne la nom de joure %d : ",i+1);
    scanf(" %[^\n]",&p[i].name);
    printf("donne la post de joure %d : ",i+1);
    scanf(" %[^\n]",&p[i].place);
    printf("donne la nom de equip de joure %d : ",i+1);
    scanf(" %[^\n]",&p[i].eq.nom);
    printf("donne la nom de stad de equip de joure %d : ",i+1);
    scanf(" %[^\n]",&p[i].eq.stad);
    printf("donne la nom de entrenmant de equip de joure %d : ",i+1);
    scanf(" %[^\n]",&p[i].eq.entr);
    printf("donne la pay de equip de joure %d : ",i+1);
    scanf("%d",&p[i].eq.pay);
    }
    for (i = 0; i < 2; i++) { 
        printf("\nJoueur %d:\n", i + 1);
        printf("  Nombre: %d\n", p[i].nbr);
        printf("  Nom: %s\n", p[i].name);
        printf("  Position: %s\n", p[i].place);
        printf("  Equipe: %s\n", p[i].eq.nom);
        printf("  Stade: %s\n", p[i].eq.stad);
        printf("  Entraineur: %s\n", p[i].eq.entr);
        printf("  Salaire: %d\n", p[i].eq.pay);
    }
    
    

}

    