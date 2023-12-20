#include<stdio.h>

int main(void){
    int Arr[]={9,3,5,7,0};
    // print the given array:
    printf("the unsorted array is: ");
    for(int initial=0;initial<5;initial++){
        printf("%d ", Arr[initial]);
    } 
    printf("\n");
    for(int i=0;i<5;i++){
        for(int j=0; j<5-i-1;j++){
            if (Arr[j]>Arr[j+1]){
                int temp =Arr[j];
                Arr[j]=Arr[j+1];
                Arr[j+1]=temp;
            }
        }
    }
    // for sorted order 
    printf("the sorted order is: ");
    for(int i=0; i<5;i++){
        printf("%d ",Arr[i]);
    }
    printf("\n");
}