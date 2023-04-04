#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);


    if (a > b && a > c)
    {
        printf("The greatest number is %d.\n", a);
    }


    else if (b > a && b > c)

    {
        printf("The greatest number is %d.\n", b);
    }


    else if (c > a && c > b)

    {
        printf("The greatest number is %d.\n", c);
    }


    else if (a == b && b == c)

    {
        printf("All three numbers are equal.\n");
    }


    else

    {
        printf("The greatest number appears two or three times: %d.\n", a);
    }

    return 0;
}
