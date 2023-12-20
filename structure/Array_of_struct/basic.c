#include<stdio.h>
#include<string.h>
int main(void){
    typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tire;
    } pokemon;
    // create 10 pokemon   
    pokemon Arr[10];
    Arr[0].attack=50;
    Arr[0].hp=10;
    Arr[0].attack=159;
    Arr[0].tire='A';

    Arr[1].attack=50;
    Arr[1].hp=10;
    Arr[1].attack=159;
    Arr[1].tire='A';
    for (int i=0; i<2; i++){
        printf("%d\n",Arr[i].attack);
        printf("%d\n",Arr[i].hp);
        printf("%d\n",Arr[i].attack);
        printf("%c\n",Arr[i].tire);
        printf(" \n");  // %d use gare ma A ko ASCII value 65 aauxa
    }

}