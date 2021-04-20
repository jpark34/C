// takes an input of 3 integers and outputs the sum, average, product, smallest, largest

#include <stdio.h>

int main ( void ) {

    int integer1;
    int integer2;
    int integer3;

    int sum;
    int average;
    int product;

    puts ( "Enter the first number:" );
    scanf("%d", &integer1);

    puts("Enter the second integer:");
    scanf("%d", &integer2);

    puts("Enter the third integer:");
    scanf("%d", &integer3);

    sum = integer1 + integer2;
    average = (integer1 + integer2 + integer3) / 3;
    product = integer1 * integer2;

    printf("Sum: %d\n", sum);
    printf("Average: %d\n", average);
    printf("Product: %d\n", product);

    if ( integer1 < integer2 && integer3 ){
        printf("Small: %d\n", integer1);
    }

    if ( integer2 < integer1 && integer3 ){
        printf("Small: %d\n", integer2);
    }

    if ( integer3 < integer2 && integer1 ){
        printf("Small: %d\n", integer3);
    }

    if ( integer1 > integer2 && integer3 ){
        printf("Large: %d\n", integer1);
    }

    if ( integer2 > (integer1 && integer3) ){
        printf("Large: %d\n", integer2);
    }

    if ( integer3 > integer2 && integer1 ){
        printf("Large: %d\n", integer3);
    }
}