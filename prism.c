/*ASSIGNMENT 1 PROBLEM 3*/
/*@ Xavier Sandilands 2025 Jan 30th*/
/*SFU ID: 301622398*/

#include <stdio.h>
#include <math.h>

int main()
{
    /*Declaring variables for side length, prism length and volume */
    float SIDE_LEN = 0.0;
    float PRISM_LEN = 0.0;
    float VOLUME = 0.0;

    /*Getting user input for side length and prism length and assginging to variables */
    printf("enter the length of each side of the equilateral triangle: ");
    scanf("%f", &SIDE_LEN);
    printf("enter the length of the triangular prism: ");
    scanf("%f", &PRISM_LEN);

    /*Calculating volume with given equation and printing result to console as 2 digit float */
    VOLUME = (PRISM_LEN*SIDE_LEN)*(SIDE_LEN*sqrt(3)/4);
    printf("The volume of the triangular prism is %.2f cubic centimeters", VOLUME);

    /*returning an int value because data type of function is int*/
    return 0;
}
