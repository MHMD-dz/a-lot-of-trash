#include<stdio.h>
#include<stdlib.h>

int main(){
    int  oran , i , an ;
    float jijl ;
    //printf("donner lage de amale : ");
    //scanf("%d",&n);
    //c = 0 ;
    //for ( i = 1 ; i <= n ; i++)
    //{
    //c = c + 500 + ( i * 3 );
    //}
    //printf("\n money :  %d da ", c );  
    oran = 1000000 ;
    jijl = 500000 ;
    an = 0 ;
    while ( oran > jijl )
    {
    oran = oran + 50000 ;
    jijl = jijl + (jijl * 0.08) ;
    an = an + 1 ;

    

    }
    
printf("\n  %d ", an );  
    
}