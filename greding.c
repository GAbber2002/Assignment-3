#include <stdio.h>

int main()
{
    int marks[5], total_marks = 0, i;

    printf("Enter the marks of 5 subjects:\n");

    for (i = 0; i < 5; i++)
    {
        printf("Subject %d: ", i+1);
        scanf("%d", &marks[i]);
        total_marks += marks[i];
    }

    float average_marks = (float) total_marks / 5.0;
    printf("Total marks obtained: %d\n", total_marks);
    printf("Average marks obtained: %.2f\n", average_marks);

    if (average_marks >= 33.0)
        {
        printf("Congratulations, you passed the examination!\n");
    }
    else {
        printf("Sorry, you failed the examination.\n");
    }

    return 0;
}
