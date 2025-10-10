unsigned get_last_digit(unsigned index) {

  unsigned i = 1;
  unsigned current = 0;
  unsigned previous = 1;
  
  if (index == 0) return 0;
  if (index == 1) return 1;
  
  while(i <= index)
  {
    unsigned temp = (previous + current) % 10;
    previous = current;
    current = temp; 
    i++; 
  }
  return current;
}
