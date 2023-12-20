//******* 
// *****
//  ***
//   *
#include<stdio.h>
int main(void){
    for(int row=1; row<=4;row++){
        for(int space=1; space<=row-1;space++)
            printf(" ");
            for(int star=1; star<=2*(5-row)-1; star++)
                printf("*");
                printf("\n");
             
            }
            
        }
     
    

