#include<stdio.h>
#include<string.h>
int main(void){
    char str[100];
    printf("enter string: ");
    scanf("%[^\n]s",str);
   

// size nikalne string ko
int size =0;
int i=0;
int k;
while( str[k]!='\0'){
    size++;
    k++;
}
// for reverse
int j;
for ( i=0,j=size-1;i<=j;i++,j--){
    // swap
    char temp = str[i];
    str[i]=str[j];
    str[j]=temp;

} 
puts(str);
    
}

