//https://www.codewars.com/kata/56747fd5cb988479af000028/train/c
//19 Maret 2024

#include <string.h>

/* remember to null-terminate outp! */

char *get_middle(char outp[3], const char *inp)
{
  int length = strlen(inp);
  int mid = length / 2;
  if(length % 2 == 1){
    outp[0] = inp[mid];
    outp[1] = '\0';
  }else if(length % 2 == 0){
    outp[0] = inp[(mid) - 1];
    outp[1] = inp[(mid)];
    outp[2] = '\0';
  }
  return outp;
}
