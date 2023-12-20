#include<stdio.h>
#include<string.h>
int main(void){
    char str[40];
    // gets(str); // gets le space paxadi ni read garxa
   // scanf("%s",str); // string ma &str  hunna  hai
   //  scanf use gare ma space paxadi ko read gardaina hai ta

   // if %s ko place ma %[^\n]s use gare ma read  garxa space paxadi ko ni 
    scanf("%[^\n]s",str);
    printf(" your input was %s",str);
    printf("\n");

}


