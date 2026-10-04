// To check wether enterd number is prime or not
#include <stdio.h>
int main()
{
    int i, N, prime = 0;
    printf("enter the number");
    scanf("%d", &N);
    for (i = 2; i <= N / 2; i++)
    {
        if (N % 2 == 0)
        {
            prime = 1;
            break;
        }
    }
    if (prime == 0)
    {
        printf("PRIME");
    }
    else
    {
        printf("NOT PRIME");
    }
    return 0;
}