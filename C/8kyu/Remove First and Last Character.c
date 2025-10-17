char *remove_char(char *dst, const char *src) {
  int i = 1;
  
  if(src[0] == '\0' || src[1] == '\0') return "";
  
  while(src[i] != '\0')
  {
    dst[i - 1] = src[i];
    i++;
  }
  
  dst[i - 2] = '\0';
  
  return dst;
}
