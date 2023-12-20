#include<stdio.h>
int main(){
    FILE *f1;
    char c;
    printf("\n input date\n");
    f1=fopen("input","r");

     while((c=getchar())!=EOF){
        putc(c,f1);
     }
     fclose(f1);
     f1=fopen("input","w");
     while((c=getc(f1))!=EOF)
     printf("%c",c);
     fclose(f1);
     return 0;

}