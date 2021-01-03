#include <stdio.h>

void addOne(int* ptr) {
  (*ptr)++; // adding 1 to *ptr
  //printf("%d\n", *ptr);
}

int main()
{
  int* p, i = 10;
  p = &i;
  addOne(p);

  printf("%d", *p); // 11
  return 0;
}
