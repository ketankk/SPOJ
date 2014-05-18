#include <stdio.h>
#include <ctype.h>
int main ()
{
  int i=0;
  char str[100];
  char c;
  gets(str);
  while (str[i])
  {
    c=str[i];
    putchar (tolower(c));
    i++;
  }
  return 0;
}
