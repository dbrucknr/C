#include <stdio.h>

int main()
{
    int a, b;

    printf("Type a positive value: ");
    scanf("%d", &b);

    for (a = 0; a < b; a++)
    {
        printf("a: %d \nb: %d\n", a, b);
        printf("I must do this %d times\n", b - a);

        // Limits to 10 lines of output
        if (a == 9)
        {
            break;
        }
    }

    return 0;
}