#include<stdio.h>
#include<stdlib.h>
int main(void){
    // to calculate the sum of 5 digits using callloc
    int *ptr;
    ptr=(int*) calloc(5,sizeof(int));
    int sum=0;
    printf("enter any 5 digits: ");
    for(int i=0; i<5;i++){
        scanf("%d",(ptr+i));    //(ptr+i)===> in array 1st  acts as a pointer itself 
        sum+= *(ptr+i);

    }
    printf("the sum is %d\n", sum);
    // modify the size 5 to 6 and find sum of 6 given digits

    ptr=(int*)realloc(ptr, 6*sizeof(int));
    sum=0;
    printf("enter any 6 digits: ");
    for(int j=0;j<6;j++){
        scanf("%d",(ptr+j));
        sum+=*(ptr+j); // *(ptr+i)===> * indicates the value using pointer

    }
    printf("sum of 6 digits is %d\n",sum);
    free(ptr); // free()==> means clear the memory after uses
}