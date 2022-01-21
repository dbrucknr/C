#include <stdio.h>

// Void datatype is used to allocate memory, some function definitions, or when a variable holds no data.

int main()
{
    char c;
    int i;
    float f;
    double d;

    // Input
    printf("Type a character: ");
    scanf("%c", &c); // Example: A
    printf("Type an integer: ");
    scanf("%d", &i); // Example: 42
    printf("Type a small value: ");
    scanf("%f", &f); // Example: .25
    printf("Type a huge value: ");
    scanf("%lg", &d); // Example: 2.56e12

    // Output
    printf("\nCharacter: %c\n", c);
    printf("\nInteger: %d\n", i);
    printf("Single-precision: %f\n", f);
    printf("Double-precision: %lg\n", d);
    return 0;
}

int further()
{
    // C has no string type - must use array of char
    char buffer[32];
    printf("Type your name: ");
    fgets(buffer, 32, stdin);
    printf("Hello, %s", buffer);
    return 0;
}