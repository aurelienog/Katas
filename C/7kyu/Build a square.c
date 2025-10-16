#include <stdlib.h>
#include <stddef.h>

char* generate_shape(size_t n) {
    char *square;
    size_t length = n * (n + 1) + 1;
    square = malloc(length * sizeof(char));
    size_t i = 0;
    size_t k = 0;
  
    while(i < n)
    { 
      k = 0;
      while(k < n)
      {   
        square[i * (n + 1) + k] = '+';
        k++;
      }
      square[i * (n + 1) + n] = '\n';
      i++;
    }
  
    square[(i-1) * (n + 1) + k] = '\0';
  
    return square;
}

/* Better solution

char* generate_shape(size_t n)
{
    char* sq = (char*) calloc((n+1)*n, sizeof(size_t));
    char* start = sq;
    for (size_t i=0; i<n; i++) {
      if (i>0) *sq++ = '\n';
      for (size_t j=0; j<n; j++) {
        *sq++ = '+';
      }
    }
    *sq = '\0';
    return start;
}

*/
