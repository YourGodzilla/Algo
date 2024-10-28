#include <stdio.h>

int main() {
    struct Weapon {
        char* name;
        int attackPower;
        int range;
    };
    
    struct Player {
        char* name;
        int healthPoin;
        struct Weapon weapon;
    };

    struct Player player1 = {
        .name = "Petani kode",
        .healthPoin = 100,
        .weapon = {
            .name = "Katana",
            .attackPower = 30,
            .range = 100
        }
    };

    printf("== Player Status ==\n");
    printf("Player \t: %s\n",player1.name);
    printf("HP \t: %d\n",player1.healthPoin);
    printf("\n");
    printf("-- Weapon --\n");
    printf("Name \t: %s\n",player1.weapon.name);
    printf("Attack \t: %d\n",player1.weapon.attackPower);
    printf("Range \t: %d\n",player1.weapon.range);

    return 0;
}