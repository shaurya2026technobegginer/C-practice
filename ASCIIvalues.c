// to print the ASCII value of all alphabets
#include <stdio.h>

int main()
{

    char ch;
    printf("Alphabet\tASCII\n");
    ch = 'A';
    while (ch <= 'Z')
    {
        printf("%c\t\t%d\n", ch, ch);
        ch++;
    }
    ch = 'a';
    while (ch <= 'z')
    {
        printf("%c\t\t%d\n", ch, ch);
        ch++;
    }
}
