#include<stdio.h>
int main(void){
    int i=5;
    int *ptr=&i;
    int **pptr=&ptr;
    printf("%d\n",*ptr);
    printf("%d\n",**pptr); 
}
// display the name of students whose % is greater than 60 using structure??
