
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    if (isupper(ch))
    {
        printf("%c is in uppercase\n", ch);
    }


    else if (islower(ch))
    {
        printf("%c is in lowercase\n", ch);
    }

    else
    {
        printf("%c is not an alphabet\n", ch);
    }

    return 0;
}

