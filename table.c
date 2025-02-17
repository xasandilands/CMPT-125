/*ASSIGNMENT 1 PROBLEM 2*/
/*@ Xavier Sandilands 2025 Jan 30th*/
/*SFU ID: 301622398*/

/*Implimenting math library and defining PI*/
#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846

int main ()
{
	    /*Declaring variables for rows, angle, increment , sine, cosine and pi/180 const */
       const float PI180 = M_PI/180;
       int ROWS = 0;
       float START_ANGLE = 0.0;
       float INCREMENT = 0.0;
       float COSINE = 0.0;
       float SINE = 0.0;

        /**Getting user input for row, angle and increment values and assging to variables*/
       printf("Enter the number of rows in the table to be produced\nThe number of rows must be between 0 and 35 ");
       scanf("%d", &ROWS);
        /*Checking if number inputed for rows is between 5 and 35*/
       if(ROWS>35 || ROWS<5)
       {
        printf("ERROR, NUMBER NOT WITHIN STATED BOUNDARY");
       }

       printf("Enter the starting angle in degrees (e.g. 3.45)");
       scanf("%f", &START_ANGLE);
       printf("Enter increment in angle between rows in degrees (e.g. 0.5) ");
       scanf("%f", &INCREMENT);

        /*Printing titles of the 3 columns */
       printf("\n%14s %12s %14s \n","Angle", "Sine","Cosine");

    for (int countData = 0; countData < ROWS; countData++ )
    {
		/*Calculating sine and cosine */
        SINE = sin(START_ANGLE*PI180);
        COSINE = cos(START_ANGLE*PI180);
    
        /*Checking what sin cosine and sine are to accomodate acordingly for row spacing */
     
            printf("%14.2f%14.4f%14.4f\n",START_ANGLE, SINE, COSINE);
        
    /*Increasing angle by chosen increment*/
      START_ANGLE+=INCREMENT;
    }
    /*Returning int for function of data type int*/
    return 0;
}