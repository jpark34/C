// Asks for 2 integers and prints the sum, product, remainder, and quotient

#include <stdio.h>

int main ( void ) {

    int integer1;
    int integer2;
    int sum;
    int product;
    int remainder;
    int quotient;

    puts ( "Enter the first number:" );
    scanf("%d", &integer1);

    puts("Enter the second integer:");
    scanf("%d", &integer2);

    sum = integer1 + integer2;
    product = integer1 * integer2;
    remainder = integer1 - integer2;
    quotient = integer1 / integer2;

    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);
    printf("Remainder: %d\n", remainder);
    printf("Quotient: %d\n", quotient);
}