#include<stdio.h>
int main(void){
    for(int i=1;i<=10; i++){
        if(i==5){
            break;
        }
        printf("%d ",i);
    }
}