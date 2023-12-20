#include<stdio.h>
int main(void){
    printf("the odd number from 100 to 1 are\n");
    for (int i=0; i<100;i++){
        if(i%2!=0){
            printf("%d ",i);
            continue;
        }
    }
}