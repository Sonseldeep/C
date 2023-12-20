#include<stdio.h>
int main(void){
    int A[]={1,2,4};
    int *ptr= A;
    for(int i=0;i<3;i++){
        printf(" %p \n",ptr++);
        
        
        
    }
}