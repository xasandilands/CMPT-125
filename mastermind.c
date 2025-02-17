#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define MAX_ATTEMPTS 20

int main()
{
    int SOL[6];
    int PREVIOUS_GUESS[20][6];
    int GUESS[100];
    int ATTEMPTS = 0;
    int SEED = 0;
    int MACTHES = 0;
    int P_MATCHES = 0;
    bool WINNER = false;


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
    srand(SEED);
    RandSol(SOL);


    printf("For each turn enter 6 digits 0 <= digit <= 5\nSpaces or tabs in your response will be ignored");

    while(WINNER == false && ATTEMPTS<=MAX_ATTEMPTS)
    {
        printf("Enter your guess, 6 digits ");
        for(int i=ATTEMPTS;i>0;i--)
        {

        }

    }
}

void RandSol(int arr[])
    {
        for(int i=0; i<6;i++)
        {
            arr[i]=rand()%6;
        }
    }


