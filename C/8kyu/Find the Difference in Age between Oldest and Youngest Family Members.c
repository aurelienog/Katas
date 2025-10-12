/*
At the annual family gathering, the family likes to find the oldest living family member’s age and the youngest family member’s age and calculate the difference between them.

You will be given an array of all the family members' ages, in any order. The ages will be given in whole numbers, so a baby of 5 months, will have an ascribed ‘age’ of 0. Return a new array (a tuple in Python) with [youngest age, oldest age, difference between the youngest and oldest age].
*/

#include <stdlib.h>

int *difference_in_ages(size_t a, const int ages[a]) {
  int *min_max_difference_ages;
  min_max_difference_ages = malloc(3 * sizeof(int));
  if(!min_max_difference_ages) return NULL;
  size_t i = 0;
  min_max_difference_ages[0] = ages[0];
  min_max_difference_ages[0] = ages[1];

  
  while(i < a)
  {
    if(ages[i] < min_max_difference_ages[0])
    {
      min_max_difference_ages[0] = ages[i];
    }
    
    if(ages[i] > min_max_difference_ages[1])
    {
      min_max_difference_ages[1] = ages[i];
    }
    i++;
  }
  
  min_max_difference_ages[2] = min_max_difference_ages[1] - min_max_difference_ages[0];
  
  return min_max_difference_ages;
}
