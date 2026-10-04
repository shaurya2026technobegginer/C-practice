/**************/
#include <stdio.h>

int main()
{
    float x, power = 1;
    int i, y;
    printf("enter the value of x y");
    scanf("%f%d", &x, &y);
    i = 1;
    while (i <= y)
    {
        power = power * x;
        i++;
    }
    printf("%f raised to %d is %f", x, y, power);
    return 0;
}
