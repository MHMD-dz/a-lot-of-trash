#include<stdio.h>
#include<stdlib.h>
int main(){

int year ;

printf("enter the year : ");
scanf("%d",&year );

if (( year % 4 == 0 && year % 100 != 0  )){
    printf(" it is ieap year");}
    else {
     printf(" it is not ieap year");


}
return 0 ;
}