#include<stdio.h>
#include<stdlib.h>
int main(void){
    int *ptr;
    ptr = (int*) malloc(5*sizeof(int));
    int sum=0;
    printf("enter any 10 digit:");
    for(int i=0; i<5; i++){
        scanf("%d",(ptr+i));
        sum+= *(ptr+i);

    }
    printf("the sum of given digits is %d \n",sum);

free(ptr);
}