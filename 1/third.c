#include <stdio.h>

int main()
{
  int a, b = 1, c = 1;

  a = sizeof(c = ++b + 1);
  printf("a = %d, b = %d, c = %d", a, b, c);
}

/*
a = 4, b = 1, c = 1
*/

/*
a is sizeof(int)
b, c is not evaluated: https://qiita.com/yohhoy/items/a2ab2900a2bd36c31879#size_t%E3%81%A8c%E6%A8%99%E6%BA%96%E3%83%A9%E3%82%A4%E3%83%96%E3%83%A9%E3%83%AA%E3%83%98%E3%83%83%E3%83%80-
*/