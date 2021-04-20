#include <stdio.h>

typedef struct Position
{
    int x,y;
}Position;

typedef struct Sword
{
    char name[20];
    double damage;
    double price;
    double weight;
}Sword;

typedef struct Shield
{
    char name[20];
    double protection;
    double price;
    double weight;
}Shield;

typedef struct Equipment
{
    Sword sword;
    Shield shield;
}Equipment;

typedef struct Player
{
    int level;
    double speed;
    double health;
    Position position;
    Equipment equipment;
}Player;

int main(void)
{
    return 0;
}