#include<stdio.h>
int main(void){
    char Arr[]=" My name is SonselDeep"; // string ma last ma as defult \0 hunxa if \0 lekhi ni nalekhini
    int i=0;
    while(Arr[i]!='\0'){  // '\0' has null value whose ASCII value is 0;
        printf("%c",Arr[i]);
        i++;
    }
}