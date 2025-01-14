#include<stdio.h>
#include<stdlib.h>

void prem(int *x){
    int i , s=0 ;
for ( i = 2 ; i <= (*x/2) ; i++){
if (*x % i == 0){
s += 1 ;}}
if (s = 0){
printf("the nombre %d is premer ",*x);}
else{
printf("the nombre %d is nonpremer ",*x);}
}


int main(){
    int n ;
    printf("donner la nombre : ");
    scanf("%d",&n);
    prem(&n);
}