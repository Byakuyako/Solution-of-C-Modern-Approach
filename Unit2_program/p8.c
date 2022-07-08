#include <stdio.h>

int main()
{
  float a, b, c;
  float s1, s2, s3;

  printf("Enter amount of loan: ");
  scanf("%f", &a);
  printf("Enter inter rate: ");
  scanf("%f", &b);
  printf("Enter monthly payment: ");
  scanf("%f", &c);

  s1 = (a - c) + a * 0.06 / 12;
  s2 = (s1 - c) + s1 * 0.06 / 12;
  s3 = (s2 - c) + s2 * 0.06 / 12;

  printf("Balance remaining after first payment: %.2f\n", s1);
  printf("Balance remaining after second payment: %.2f\n", s2);
  printf("Balance remaining after third payment: %.2f\n", s3);
}