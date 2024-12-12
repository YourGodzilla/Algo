#include <stdio.h>

void add_score(int *score) {
    *score = *score + 5;
    printf("Score diubah ke %d\n",*score);
}

main() {
    int score = 0;

    printf("score sebelum diubah: %d\n",score);
    add_score(&score);
    add_score(&score);
    add_score(&score);
    add_score(&score);
    add_score(&score);
    add_score(&score);
    printf("score setelah diubah: %d\n",score);
}