#include<stdio.h>
int main(void){
    int a=1;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("%d",a);
            a++;
        }
        printf("\n"); 
    }
}