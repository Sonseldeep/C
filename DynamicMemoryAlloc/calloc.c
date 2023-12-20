#include<stdio.h>
#include<stdlib.h>
int main(void){
    int *ptr;
    ptr= (int*) calloc(5, sizeof(int));
// calloc()
    int sum=0;
    printf("enter 5 difits: ");
    for(int i=0; i<5; i++){
        scanf("%d",(ptr+i));
        sum+= *(ptr+i);

    }
    printf("the sum of given digit is %d \n", sum);
    free(ptr);
}