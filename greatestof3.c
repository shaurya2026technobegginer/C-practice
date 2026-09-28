/*To check wether the enterd 3 number is greatest using conditional operator*/
#include <stdio.h>
int main()
{
    int a, b, c, Greatest;
    printf(" enter the 3 number");
    scanf("%d%d%d", &a, &b, &c);
    Greatest = ((a > b) ? a : b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("%d is greatest", Greatest);
    return 0;
}