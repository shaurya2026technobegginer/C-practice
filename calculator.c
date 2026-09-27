#include <stdio.h>
int main()
{
    char operator;
    int a, b;
    printf("enter the operator(+ - / * %)");
    scanf("%c", &operator);
    printf("enter 2 numbers");
    scanf("%d%d", &a, &b);
    switch (operator)
    {
    case '+':
        printf("%d+%d=%d", a, b, a + b);
        break;
    case '-':
        printf("%d-%d=%d", a, b, a - b);
        break;
    case '*':
        printf("%d*%d=%d", a, b, a * b);
        break;
    case '/':
        if (b == 0)
        {
            printf("division by 0 is not possible");
        }
        else
        {
            printf("%d/%d=%d", a, b, a / b);
        }
        break;
    case '%':
        if (b == 0)
        {
            printf("divison by 0 is not possible");
        }
        else
        {
            printf("% d % % d = % d", a, b, a % b);
        }
        break;
    default:
        printf("invalid operator");
        break;
    }
    return 0;
}