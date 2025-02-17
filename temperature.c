/*ASSIGNMENT 1 PROBLEM 1*/
/*@ Xavier Sandilands 2025 Jan 30th*/
/*SFU ID: 301622398*/

#include <stdio.h>

int main()
{
    /*Constant variables for equation*/
    const float ROOM_TEMP = 21.80;
    const float START_TEMP = -10.20;
    /*Declaring hour, minute, totaltime variables and finaltemp variables*/
    float HOURS_OUT = 0.0;
    float MINUTES_OUT = 0.0;
    float TOTAL_TIME = 0.0;
    float FINAL_TEMP = 0.0;

    /*Asking user for hours and minutes since power outage and assigning them to variables*/
    printf("enter the number of full hours since the power failed: ");
    scanf("%f", &HOURS_OUT);
    printf("enter the number of additional minutes since the power failed: ");
    scanf("%f", &MINUTES_OUT);

    /*Calculating total time in decimal form and cacluating final temperature*/
    TOTAL_TIME = HOURS_OUT + (MINUTES_OUT/60);
    FINAL_TEMP = START_TEMP + 0.05 * TOTAL_TIME * (ROOM_TEMP - START_TEMP);

    /*Checking if maxium temp has been reached*/
    if(FINAL_TEMP > ROOM_TEMP)
    {
        FINAL_TEMP = ROOM_TEMP;
    }
    /*Printing the resulting time and temperature from above equations*/
    printf("The power has been off for %.2f hours\n", TOTAL_TIME);
    printf("Estimated present temperature in freezer is %.2f degrees Celsius\n", FINAL_TEMP);

    /*return statement for main int function*/
    return 0;
}
