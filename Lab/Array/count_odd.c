#include<stdio.h>
int count=0;
int count_odd(int arr[],int n){
    for(int i=0; i<n; i++){
        if(arr[i]%2!=0){
            count++;
        }
    }
    return count;
}
 
 int main(void){
    int n=5;
    int arr[]={1,2,3,4,5};
    count_odd(arr,n);
    printf("count of odd number from array is %d ", count);
 }