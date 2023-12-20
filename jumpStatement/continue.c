#include<stdio.h>
int main(void){
    for(int i=1; i<=10; i++){
        if(i%3==0){ //  skip the true condition and continue if and only if condition is not satisfied
            continue;
        }
        printf("% d ",i);
    }
    printf("\n");
}