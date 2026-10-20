/******************************************************************************
program to find roots for quadratic equation

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, root1, root2, real, imag, d;
    printf("ENter the cofficient and the  constant");
    scanf("%f%f%f", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (a != 0)
    {
        if (d == 0)
        {
            root1 = -b / (2 * a);
            printf("Roots are %f and %f", root1, root1);
        }
        else if (d > 0)
        {
            root1 = (float)(-b + sqrt(d)) / (2 * a);
            root2 = (float)(-b - sqrt(d)) / (2 * a);
            printf("roots are %f amd %f", root1, root2);
        }
        else
        {
            real = (float)-b / (2 * a);
            imag = (float)sqrt(-d) / (2 * a);
            printf("roots are %f+%fi and %f-%fi", real, imag, real, imag);
        }
    }
    else
    {
        printf("Not a quadratic");
    }

    return 0;
}
