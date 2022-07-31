#include <stdio.h>

int main()
{
  char *p = 0;

  *p = 'A';
  printf("Value at p = %c", *p);
}

/*
zsh: segmentation fault  ./a.out
*/

/*
MEIKAI p.296
*/
