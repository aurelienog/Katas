//  do not allocate memory for the return
//  assign values to pre-allocated result

#include <stdbool.h>
#include <stddef.h>

bool is_flick(const char *s) 
  {
    const char *word = "flick";
    int i = 0;
  
    while(s[i] != '\0' && word[i] != '\0') 
    {
      if(s[i] != word[i]) {
        return false;
      }
      i++;
    }
    return s[i] == '\0' && word[i] == '\0';
  }

void flick_switch(size_t length, const char *const array[length], bool result[length]) {

  size_t i = 0;
  bool state = true;
  
  while(i < length)
  {
    if(is_flick(array[i]))
    {
      state = !state;
    }
    
    result[i] = state;
    i++;  
  }
  
}

/* //  do not allocate memory for the return
//  assign values to pre-allocated result

#include <stdbool.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>

void flick_switch(size_t length, const char *const array[length], bool result[length]) {
  
  bool swtch = true;
  size_t i = 0;

  for (; i < length; i++){
    
    if (strcmp(array[i], "flick") == 0)
      swtch = !swtch;
    result[i] = swtch;
  }
}
*/
