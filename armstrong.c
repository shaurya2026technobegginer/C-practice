// To chech wether enterd number is armstrong or not
#include <stdio.h>

int main()
{
    int n, on, rem, arm = 0;
    printf("enter the number");
    scanf("%d", &on);
    n = on;
    while (n != 0)
    {
        rem = n % 10;
        arm = (rem * rem * rem) + arm;
        n = n / 10;
    }
    if (arm == on)
    {
        printf("%d is an armstrong", on);
    }
    else
    {
        printf("not armstrong");
    }
    return 0;
}
