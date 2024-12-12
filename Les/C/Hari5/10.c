#include <stdio.h>

void main() {
    struct Player {
        char* name;
        unsigned int level;
    };

    union Enemy {
        char* name;
        unsigned int hp;
    };

    struct Player player1;
    player1.name = "Petani Kode";
    player1.level = 1;

    printf("Player : %d (address = %x)\n",sizeof(player1),&player1);
    printf("- Name : %d (address = %x)\n",sizeof(player1.name),&player1.name);
    printf("- Level : %d (address = %x)\n",sizeof(player1.level),&player1.level);

    union Enemy zombie;
    zombie.name = "Zombie 1";
    zombie.hp = 100;

    printf("Enemy : %d (address = %x)\n",sizeof(zombie),&zombie);
    printf("- Name : %d (address = %x)\n",sizeof(zombie.name),&zombie.name);
    printf("- HP : %d (address = %x)\n",sizeof(zombie.hp),&zombie.hp);
}