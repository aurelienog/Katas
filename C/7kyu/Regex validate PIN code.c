#include <stdbool.h>

bool validate_pin(const char *pin) {
  int i = 0;
  
  while(pin[i] != '\0')
  {
    if((pin[i] < '0') || (pin[i] > '9')) return false;
    i++;
  }
  if(i == 4 || i == 6)
  {
    return true;
  } else {
    return false;
  }
}
