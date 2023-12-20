#include<stdio.h>
#include<string.h>
int main(void){
    typedef struct pokeman{
        int hp;
        int speed;
        int attack;
        char tire;
        char name[100];
    } pokeman;
     typedef struct legendarypokeman{
        // sabai features haru pokeman kai tara ability extar
        pokeman noraml;
        char ability[100];
    } legendarypokeman;
    legendarypokeman mewtwo;
    mewtwo.noraml.hp=150;
    mewtwo.noraml.speed=170;
    mewtwo.noraml.attack=150;
    strcpy(mewtwo.noraml.name,"FighterPokeman");
    mewtwo.noraml.tire='s';
    




}