#include<stdio.h>
int main(void){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            int a=5/2+1;
            if( j==a || i==a){
                printf("*");
            }
            else {
                printf(" ");

            }
            
            
        }
        printf("\n"); 
    }
}