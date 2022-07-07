#include <stdio.h>
#include <math.h>

int main(void)
{
  float r , v;
  printf("请输入球体半径: ");
  scanf("%f", &r);
  v = 4.0f / 3.0f * M_PI * r * r * r;
  printf("球体的体积是: %.2f\n", v);

  return 0;
}