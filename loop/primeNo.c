#include<stdio.h>
int main(void){
    int n;
    printf("enter any number  ");
    scanf("%d",&n);
    int a=0;
    for(int i=2; i<n-1;i++){
        if(n%i==0){
            a=1;
            break;
        }
        

    }
    if(a==0) printf("prime\n");
        else printf("no is composite \n");

}