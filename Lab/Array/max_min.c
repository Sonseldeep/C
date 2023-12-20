#include<stdio.h>
int main(void){
    int a[]={-9,2,90,-40,5};
    int max= -1;
    int min= a[0];
    for(int i=0; i<5; i++){
        if(a[i]>max){
            max=a[i];
        }
    
        else if( a[i]<min){
            min=a[i];
        }
    }
    printf("the max element is %d \n ",max);
    printf("the min element is %d ",min);
}