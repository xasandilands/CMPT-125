#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char SOLUTION[6];
    char PREVIOUS_GUESS[20][6];
    char GUESS[6];
    int ATTEMPTS = 0;
    int SEED = 0;

    printf("Enter the integer value of the seed for the game: ");
    scanf("%d", &SEED);

    if (SEED == 0)
    {
        printf("Try again, you made an error\n");
        printf("Please enter an integer to be the seed for the game: ");
        while (scanf("%d", &SEED) != 1)
        {

            while (getchar() != '\n');
            printf("Please enter an integer to be the seed for the game: ");
        }
    }

}
