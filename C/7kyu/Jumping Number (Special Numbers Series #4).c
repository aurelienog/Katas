const char *jumpingNumber(int number)
{
  int prev = number % 10;
  number /= 10;
  
  while(number != 0)
  {
    if(number % 10 == (prev - 1) || number % 10 == (prev + 1))
    {
      prev = number % 10;
      number /= 10;
    } else {
      return "Not!!";
    }
  }
    return "Jumping!!";
}

