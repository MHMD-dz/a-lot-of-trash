#include<stdio.h>
#include<stdlib.h>

int main(){
    int n , s ;
    s = 0 ;
    while (n != -99 ){
    printf("enter n :");
    scanf("%d",&n);
    s+=n;
    }
    printf("sum = %d",s);
}