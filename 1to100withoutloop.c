#include<stdio.h>
int call(int n){
    if(n<100){
        printf("%d ",n);
        call(n+1);

    }
    
}
int main(void){
    int n=1;
    call(n);
 
}