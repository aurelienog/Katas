#include <stdbool.h>

bool valid_parentheses(const char* str) {
  int top = -1;
  int i = 0;
  
  if(str[0] == ')') return false;
  
  while(str[i] != '\0')
  { 
    if(str[i] == '(')
    {
      top++;
    } else {
      if(top < 0) return false;
      top--;
    }
    i++;
  }
  return top == -1;
}
