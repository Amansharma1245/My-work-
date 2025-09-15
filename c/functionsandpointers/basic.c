#include <stdio.h>
int main()
{
  int a;
  int b;
  printf("Enter num 1 :");
  scanf("%d", &a);
  printf("Enter num 2 :");
  scanf("%d", &b);
  printf("Before Swapping \nnum 1=%d\nnum 2=%d\n", a, b);
  a = a + b;
  b = a - b;
  a = a - b;
  printf("After Swapping \nnum 1=%d\nnum 2=%d ", a, b);
  return 0;
}