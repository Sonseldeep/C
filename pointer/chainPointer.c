#include<stdio.h>
int main(void){
    
    int a=5;
    int *p=&a;
    int **q=&p;
    printf("%p \n",q); // q  holds the address of p
    printf("%p is the address of p \n",&p);
    printf("%d \n",**q);  // **q holds the value of a or holds the value of *p

}