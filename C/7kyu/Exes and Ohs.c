#include <stdbool.h>

bool xo (const char* str)
{
  int Exes;
  int Ohs;
  int i;
  
  Exes = 0;
  Ohs = 0;
  i = 0;
  
  while(str[i])
  {
    if(str[i] == 'x' || str[i] == 'X')
    {
      Exes++;
    } else if(str[i] == 'o' || str[i] == 'O')
    {
      Ohs++;
    }
    i++;
  }
  return Exes == Ohs;
}
