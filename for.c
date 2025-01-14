#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int n ;
    double s , i  ;
    printf("entrez la nombre positif n : ");
    scanf("%d",&n);
    s = 0 ;
    //  for ( i = 1 ; i <= n  ; i++ ){
    //     s += (1/i)  ;
    // }

    // for ( i = 0 ; i <= n ; i++)
    // {
    //    s = pow(10,i) + s ;
    // }
   // if ( n < 0 ) {
     //   printf("ERROR donne un nombre positif");}
    //else if ( n == 0 ){
      //  s = 1 ;
      //  printf("\n  %.2f ", s );   }
        //else {
          //  for ( i = 1; i <= n; i++)
            //{
              // s = s * i ;
            //}
            //printf("\n  %.2f ", s );  
        //}
    for ( i = 1; i <= n*2 ; i+=2 )
    {
       s = s + pow(i,2);
    }
    printf("\n  %.2f ", s );  
  


}