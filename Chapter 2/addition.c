// Takes 2 user inputted integers and adds them together

#include <stdio.h>

int main(void) {
    int int1;
    int int2;
    int sum;

    printf("Enter the first integer:\n");
    scanf("%d", &int1);

    printf("Enter the second integer:\n");
    scanf("%d", &int2);

    sum = int1 + int2;

    printf("The Sum is %d\n", sum);
}