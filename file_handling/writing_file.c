#include<stdio.h>
int main(void){
    FILE* ptr =fopen("write.txt","w");
    char str[]=" My name is Shyam \n ram is also shyam";
    fputs(str,ptr);
    fclose(ptr);
}