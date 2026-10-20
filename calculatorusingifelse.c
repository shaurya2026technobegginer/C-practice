/******************************************************************************

THIS IS THE SIMPLE CALCULATOR

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    printf("======Welcome to the simple calculator========");
    printf("\nHere you can perform simple operations");
    char op;
    printf("\nEnter the opertion out of '+'\n'-'\n'*'\n'/'\n'%'\n");
    scanf(" %c", &op);
    float a, b, result, flag = 0;
    printf("Enter the two number");
    scanf("%f%f", &a, &b);
    if (op == '+')
    {
        result = a + b;
        flag = 1;
    }
    else if (op == '-')
    {
        result = a - b;
        flag = 1;
    }
    else if (op == '*')
    {
        result = a * b;
        flag = 1;
    }
    else if (op == '/')
    {
        if (b == 0)
        {
            printf("Denominator canont be 0");
        }
        else
        {
            result = a / b;
            flag = 1;
        }
    }
    else if (op == '%')
    {
        if (b == 0)
        {
            printf("Denominator cannot be 0");
        }
        else
        {
            result = fmod(a, b);
            flag = 1;
        }
    }
    else
    {
        printf("!INVALID OPERATOR!");
    }
    if (flag == 1)
    {
        printf("ANSWER=%f", result);
    }
    return 0;
}
