#include<stdio.h>
int reverse_array(int arr[],int n){
    int start=0;
    int end= n-1;
    while(start<=end){
        int tem=arr[start];
        arr[start]=arr[end];
        arr[end]=tem;
        start++;
        end--;

    }
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}
  int main(void){
    int n=5;
    int arr[]={1,2,3,4,5};
    reverse_array(arr,n);
  }