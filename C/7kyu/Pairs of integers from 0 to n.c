//for input: 2
//it should return: [  [0, 0], [0, 1], [0, 2],  [1, 1], [1, 2],  [2, 2]  ]

#include <stddef.h>
#include <stdlib.h>
struct pair {
    int a, b;
};

struct pair *generate_pairs(unsigned n, size_t *nb_pairs)
{

  *nb_pairs = (size_t)(n + 1) * (n + 2) / 2; ; // report the number of pairs
    
  struct pair *pairs = malloc(*nb_pairs * sizeof(struct pair));
  if(!pairs) return NULL;
  size_t i = 0;
  size_t j = 0;
  
  
  while(i <= n)
  {
    size_t k = i;
    while(k <= n)
    {
      pairs[j].a = (int)i;
      pairs[j].b = (int)k;
      j++;
      k++;
    }
    i++;
  }
    return pairs; // the array will be freed
}
