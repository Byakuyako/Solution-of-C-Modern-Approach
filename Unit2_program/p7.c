#include <stdio.h>

int main()
{
  int x, a, b, c, d;

  printf("Enter a dollar amount: ");
  scanf("%d", &x);

  a = x / 20;
  b = (x - 20 * a) / 10;
  c = (x - 20 * a - 10 * b) / 5;
  d = x - 20 * a - 10 * b - 5 * c;

  printf("$20 bills: %d\n", a);
  printf("$10 bills: %d\n", b);
  printf(" $5 bills: %d\n", c);
  printf(" $1 bills: %d\n", d);

  return 0;
}