/*
Implement a function that computes the difference between two lists. The function should remove all occurrences of elements from the first list (a) that are present in the second list (b). The order of elements in the first list should be preserved in the result.

Examples
If a = [1, 2] and b = [1], the result should be [2].

If a = [1, 2, 2, 2, 3] and b = [2], the result should be [1, 3].

NOTE:
In C, assign return array length to pointer *z
*/

#include <stddef.h>
#include <stdlib.h>

int *array_diff(const int arr1[/* n1 */], size_t n1, const int arr2[/* n2 */], size_t n2, size_t *z) {
  int *result;
  size_t i = 0;
  size_t j;
  size_t k = 0;
  int is_found = 0;
  result = malloc(n1 * sizeof(int));
  if(!result) return NULL;
  
  while(i < n1)
  {
    j = 0;
    is_found = 0;
    
    while(j < n2)
    {
      if(arr1[i] == arr2[j])
      {
        is_found = 1;
        break;
      }       
      j++;
    }
    
    if(!is_found)
    {
      result[k++] = arr1[i];
    }  
    i++;
  }
  
  *z = k;
  return result;
}
