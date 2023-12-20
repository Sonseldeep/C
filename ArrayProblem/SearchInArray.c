#include<stdio.h>
int main(void){
    int Arr[]={1,2,3,4,5,6,7};
    int target = 0;
    
    for(int i=0;i<8; i++){
        if(Arr[i]==target){
            printf("Found \n");
            return 0;
        }
    }
    printf("Not found \n");
    return -1;
}