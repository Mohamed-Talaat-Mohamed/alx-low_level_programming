#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Error\n");
        return 1;
    }

    int cents = atoi(argv[1]);

    if (cents < 0) {
        printf("0\n");
        return 0;
    }

    int coins[] = {25, 10, 5, 2, 1};
    int num_coins = sizeof(coins) / sizeof(coins[0]);
    int coin_count = 0;

    for (int i = 0; i < num_coins; i++) {
        while (cents >= coins[i]) {
            cents -= coins[i];
            coin_count++;
        }
    }

    printf("%d\n", coin_count);

    return 0;
}

