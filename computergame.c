
#include <stdio.h>

int main()
{
    int stick = 21;
    int computer, human;
    printf("This is a matchstick game\nThere are 21 matchsticks\nYou can only pick 1-4matchsticks at a time");
    while (stick > 1)
    {
        printf("\nMatchstick left=%d", stick);
        printf("\nYour turn");
        scanf("%d", &human);
        if (human < 1 || human > 4 || human > stick)
        {
            printf("\nInvalid choice");
            continue;
        }
        stick = stick - human;
        computer = 5 - human;
        if (computer >= stick)
            computer = stick - 1;
        printf("\ncomputer=%d", computer);
        stick = stick - computer;
    }
    printf("\nThere is only one matchstick left\nyou are force to pick 1 matchstick\nCOMPUTER WINS!");

    return 0;
}
