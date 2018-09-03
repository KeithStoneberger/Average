//============================================================================
// Name        : average.c
// Author      : Keith Stoneberger
// Version     :
// Copyright   : 09/2018
// Description : Sum all numbers and Average them out
//============================================================================

#include <stdio.h>
#include <ctype.h>



int main () {

    float number, sum, avg;
    int n = 0, count = 1;
    char x;   

   do  {
       printf("Enter a number or press q to quit: ");
       scanf("%f", &number);

       count++;
       sum = sum + number;
       scanf("%c", &x);

       n = count - 1;
       avg = sum / n;
       printf("The average is %.2f\n ", avg);
   }
   
    while (x != 'q');

    return 0; 
}

// program is counting the number of entries
// including the 'q' for quit
