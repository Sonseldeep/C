#include<stdio.h>
int max_min(int arr[],int n){
    int max= arr[0];
    int min=arr[0];
    for(int i=0; i<n; i++){
        if( arr[i]>max){
            max=arr[i];
        }
        else if( arr[i]<min){
            min=arr[i];
        }
    }
    printf("max %d\n ",max);
       printf("min %d \n",min);
    int ans= max+min;
    printf("sum of max and min is %d \n",ans);
    return ans;
    
     
       

}
int main(void){
    int n=5;
    int arr[]={1,2,3,4,5};
    max_min(arr,n);
    

}