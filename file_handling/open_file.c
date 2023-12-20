#include<stdio.h>
#include<string.h>
int main(void){
    FILE* ptr= fopen("write.txt","r"); // fopen is must
    char str[1000];

    while(fgets(str,1000,ptr)!=NULL)
        printf("%s",str);
    
}