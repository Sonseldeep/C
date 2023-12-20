#include<stdio.h>
#include<string.h>
int main(void){
    typedef struct pokeman{
        int hp;
        int attacl;
        int speed;
        char tire;
        char name[100];
    }pokeman;
    pokeman pikachu;
    pikachu.hp=90;
    pikachu.attacl=87;
    pikachu.speed=789;
    pikachu.tire='S';
    strcpy(pikachu.name,"Rato Pikachu");

    pokeman *x= &pikachu;
    printf("%p\n",&pikachu.hp);
     printf("%p\n",&pikachu.attacl);
      printf("%p\n",&pikachu.tire);
       printf("%p\n",&pikachu.name);

       printf("%p\n",x);

}