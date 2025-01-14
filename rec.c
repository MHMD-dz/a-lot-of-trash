#include<stdlib.h>
#include<stdio.h>

int rec(int T[] , int n , int x , int i){
    if (T[i] == x){
    return x ;}
    else if (i > n){
    return -1 ;}
    else{
       return rec(T,n,x,i+1);
    }
    
    
}

int main(){
    int i , T[100] , n , x ;
    printf("donner la taille de table ");
    scanf("%d",&n);
    printf("donner les element de table ");
    for ( i = 0 ; i < n ; i++){
    scanf("%d",&T[i]);
    }
    printf("donne x ");
    scanf("%d",&x);
    printf("%d",rec(T,n ,x,0));
}