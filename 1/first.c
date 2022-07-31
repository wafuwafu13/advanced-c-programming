#include <stdio.h>

int main()
{
  if (sizeof(int) > -1)
    pritnf("True\n");
  else
    printf("False\n");
}

/*
False
*/

/*
size_t and unsigned int: https://stackoverflow.com/questions/2084949/comparison-operation-on-unsigned-and-signed-integers
*/
