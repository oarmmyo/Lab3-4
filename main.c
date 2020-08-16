#include <stdio.h>
int main(void)
{
  int a, b, c; 
  float ans;
  printf("Enter A : ");
  scanf("%d", &a);
  printf("Enter B : ");
  scanf("%d", &b);
  printf("Enter C : ");
  scanf("%d", &c);
  ans = a + b + c;
  printf("Answer is %f", ans);
  return 0;
}
