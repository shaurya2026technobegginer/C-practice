
#include <stdio.h>

int main()
{
  int n, on, rev = 0, rem;
  printf("enter the value of original number");
  scanf("%d", &on);
  n = on;
  while (n != 0)
  {
    rem = n % 10;
    rev = rev * 10 + rem;
    n = n / 10;
  }
  if (rev == on)
  {
    printf("enterd number is palindrome");
  }
  else
  {
    printf("entered number is not apalindrome");
  }
  return 0;
}