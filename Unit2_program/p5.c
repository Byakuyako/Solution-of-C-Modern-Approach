#include <stdio.h>

int main ()
{
  float x;
  printf("输入一个值: ");
  scanf("%f", &x);
  printf("多项式的值为: %.2f\n", x * (x * (x * (x * (3 * x + 2) - 5) - 1) + 7) -6 );
}