#include<stdio.h>
int main (void){
    int A[]={1,2,40,-10,0,100};
    int min=A[0];
    int max=A[0];
    for( int i = 1; i<6; i++){
        // for min 
        if( min>A[i]) {
            min = A[i];
        
        } 
        else if( max<A[i]) {
            max = A[i];
        }

        
    }
    printf("the min  value is %d  \n ", min);
    printf("the max value is %d \n", max);
}