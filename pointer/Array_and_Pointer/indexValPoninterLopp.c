#include<stdio.h>
int main(void){
    int Arr[]={1,2,3,4,5,6,0};


    // print the value of array as normal;
    for(int j=0; j<7;j++){
        printf("%d ",Arr[j]);
    }
    printf("\n");
    // get the value of All index using pointer only
    printf("the values of given array using pointer only are: ");
    for(int i=0; i<7; i++){
        printf("%d ", *(Arr+i)); // here +i means incease the address value by 4 bit not arry value +1
    }
    printf("\n"); 
    
}