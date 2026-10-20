/*HCF of two numbers*/
#include <stdio.h>

int main()
{
    int a, b;
    printf("enter 2 number such that a>b\n");
    scanf("%d%d", &a, &b);
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    printf("HCF of 2 numbers are %d", a);
    return 0;
}
