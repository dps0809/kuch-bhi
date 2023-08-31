#include <stdio.h>

int main()
{
    int a, i;
    printf("Enter the number you want multicliplication table of :\n\n");
    scanf("%d", &a);

    printf("the table of %d:\n\n", a);

    for (i = 0; i < 10; i++)
    {
        printf("%d * %d = %d\n", a, i + 1, (i + 1) * a);
    }

    printf("The work is done.");

    return 0;
}