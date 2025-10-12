/*Introduction
Raindrops is a slightly more complex version of the FizzBuzz challenge, a classic interview question.

Instructions
Your task is to convert a number into its corresponding raindrop sounds.

If a given number:

is divisible by 3, add "Pling" to the result.
is divisible by 5, add "Plang" to the result.
is divisible by 7, add "Plong" to the result.
is not divisible by 3, 5, or 7, the result should be the number as a string.
*/

#include "raindrops.h"
#include <stdio.h>
#include <string.h>

void convert(char result[], int drops)
{
    if(drops % 3 == 0)
    {
        strcat(result, "Pling");
    }

    if(drops % 5 == 0)
    {
        strcat(result, "Plang");
    }

    if(drops % 7 == 0)
    {
        strcat(result, "Plong");
    }

    if(drops % 3 != 0 && drops % 5 != 0 && drops % 7 != 0)
    {
        sprintf(result, "%d", drops);
    }
}

/* Better solution:
void convert(char result[], int drops)
{
   if (drops % 3 == 0)
      strcat(result, "Pling");
   if (drops % 5 == 0)
      strcat(result, "Plang");
   if (drops % 7 == 0)
      strcat(result, "Plong");

   if (strlen(result) == 0)
      sprintf(result, "%d", drops);
}
*/
