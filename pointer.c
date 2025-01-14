#include<stdio.h>
#include<stdlib.h>

int cherch(int *ptr , int *x , int size){
    int i , s = 0 ;

    for ( i = 0; i < size; i++){
        if (*ptr == *x){
        s++;
        ptr++;}
        else{
        ptr++;
        }
    }
    return s ;
}


int main(){
    int A[100] , i , size , *ptr , n , *x;
    printf("enter the size of the table A : ");
    scanf("%d",&size);
    ptr = A ;
    printf("enter the valer de tabl A : ");
    for ( i = 0 ; i < size ; i++){
    printf("A[%d] : ",i+1);
    scanf("%d",ptr);
    ptr++ ;}
    ptr = A ;
    printf("enter the valeur that u want to charche for it : ");
    scanf("%d",&n);
    x = &n ;
    ptr = A ;
    cherch(A,&n,size);
    if (cherch(A,&n,size) > 0){
    printf("%d exist in %d position ",*x,cherch(A,&n,size));}
    else
    {
    printf("%d dosn't exist",*x);
    }
    
 

}



/*void revers(int *ptra , int size){
    int i , temp;
    for ( i = 0; i < size/2; i++){
    temp = *(ptra+i);
    *(ptra+i) = *(ptra+size-1-i);
    *(ptra+size-1-i) = temp ;
    }}

int main(){
    int A[100] , size , i , *ptra ;
    printf("enter the size of the table A : ");
    scanf("%d",&size);
    ptra = A ;
    printf("enter the valer de tabl A : ");
    for ( i = 0 ; i < size ; i++){
    printf("A[%d] : ",i+1);
    scanf("%d",ptra);
    ptra++ ;}
    ptra = A ;
    printf("\nthe arrey befor the swap : ");
    printf("\n table A :\n");
    for ( i = 0 ; i < size ; i++){
    printf("A[%d] : %d\t",i+1,*ptra);
    ptra++;}
    ptra = A ;
    revers(A,size);
    printf("\nthe arrey after the swap : ");
    printf("\n table A :\n");
    for ( i = 0 ; i < size ; i++){
    printf("A[%d] : %d\t",i+1,*ptra);
    ptra++;}
}
*/

/*int main(){
    int size , B[100] , A[100], i , *tabl1 , *tabl2 , temp ;
    printf("enter the size of the table A et B : ");
    scanf("%d",&size);
    tabl1 = A ;
    tabl2 = B ;
    printf("enter the valer de tabl A : ");
    for ( i = 0 ; i < size ; i++){
    printf("A[%d] : ",i+1);
    scanf("%d",tabl1);
    tabl1++ ;}
    printf("enter the valer de tabl B : ");
    for ( i = 0 ; i < size ; i++){
    printf("B[%d] : ",i+1);
    scanf("%d",tabl2);
    tabl2++ ;}
    tabl1 = A ;
    tabl2 = B ;
    printf("\nthe arrey befor the swap : ");
    printf("\n table A :\n");
    for ( i = 0 ; i < size ; i++){
    printf("A[%d] : %d\t",i+1,*tabl1);
    tabl1++;}
    printf("\ntable B :\n");
    for ( i = 0 ; i < size ; i++){
    printf("B[%d] : %d\t",i+1,*tabl2);
    tabl2++;}
    tabl1 = A ;
    tabl2 = B ;
    for ( i = 0 ; i < size ; i++){
    temp = *tabl1 ;
    *tabl1 = *tabl2 ;
    *tabl2 = temp ;
    tabl1 ++ ;
    tabl2 ++ ;}
    printf("\nthe arrey after the swap : ");
    tabl1 = A ;
    tabl2 = B ;
    printf("\ntable A :\n");
    for ( i = 0 ; i < size ; i++){
    printf("A[%d] : %d\t",i+1,*tabl1);
    tabl1++;}
    printf("\ntable B :\n");
    for ( i = 0 ; i < size ; i++){
    printf("B[%d] : %d\t",i+1,*tabl2);
    tabl2++;}
}
*/


/*int main(){
    int T[10] , i , r, temp , j ;
    printf("enter the data of table : ");
    for (i = 0 ; i < 10 ; i++){
    printf("T[%d] : ",i+1);
    scanf("%d",&T[i]); }
    printf("inter te rotate time : ");
    scanf("%d",&r);
    for (j = 1 ; j <= r; j++){
        for ( i = 0; i < 10 ; i++){
        temp = T[i] ;
        T[i] = T[i+1] ;
        T[i+1] = temp ;}}
   for ( i = 0; i < 10; i++){
   printf("T[%d] = %d \t",i+1,T[i]);
   }}
*/




/* void swap(int *n , int *m){
    int temp ;
    temp = *n ;
    *n = *m ;
    *m = temp ;
}

int main(){
    int x , y , *n , *m  ;
    n = &x ;
    m = &y ;
    printf("enter te valeur de nombre 1 :");
    scanf("%d",n);
    printf("enter te valeur de nombre 2 :");
    scanf("%d",m);
    swap(&x,&y);
    printf("nombre 1 est : %d\n",x);
    printf("nombre 2 est : %d\n",y);
}
*/


/*int main(){
    int n=10 , *m ;
    m = &n;
    printf("la valer de n est : %d\n",n);
    printf("la pointer de n est : %d\n",&n);
    printf("la valer de m est : %d\n",m);
    printf("la pointer de m est : %d\n",&m);
    printf("la valer pointed por m est : %d",*m);


}
*/



/* int main(){
    int age ;
    char nom[50] ;
    float futur_not ;
    printf("enter ur age : ");
    scanf("%d",&age);
    printf("enter ur name : ");
    scanf("%s",&nom);
    printf("enter ur futur not in shaa allah : ");
    scanf("%f",&futur_not);
    printf("ur age is : %d year and it's pointer is : %d \n",age,&age);
    printf("ur name is : %s  and it's pointer is : %d \n",nom,&nom);
    printf("ur futur not is : %.2f  and it's pointer is : %d \n",futur_not,&futur_not);

}
*/



/* int min(int *x){
    int i , mini;
    mini = *x ;
    for ( i = 0 ; i < 10 ; i++){
    if (mini > *x ){
    mini = *x ;}
    x ++ ;
    }
    return mini ;
}
int main(){
int T[10] , i ;
for(i=0 ; i < 10 ; i++ ){
printf("donner la valeur de T[%d] : ",i+1);
scanf("%d",&T[i]);
}
//min(T);
printf("la min de T est : %d", min(T));
}*/