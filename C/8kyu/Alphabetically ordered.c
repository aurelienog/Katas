#include <stdbool.h>

bool is_ordered (const char *string)
{
  if(string[0] == '\0' || string[1] == '\0') return true;
  int i = 1;
  
  while(string[i] != '\0') {
    if(string[i] < string[i-1]) return false;
    i++;
  }
	return true;
}
