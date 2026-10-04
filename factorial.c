
#include <stdio.h>
int main()
{
    int i, n, fact = 1;
    printf("enter the number");
    scanf("%d", &n);
    i = 1;
    while (i <= n)
    {
        fact = fact * i;
        i++;
    }
    printf("Factorial of %d is %d", n, fact);
    return 0;
}