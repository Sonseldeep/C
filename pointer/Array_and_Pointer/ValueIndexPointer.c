#include<stdio.h>
int main(void){
  int Arr[]={12,6,3};
  // get value of 1st index using pointer

  int c= *(Arr+1);
  printf("%d \n",c);

}