// Program that will not exit the loop until a certain number is entered by the user
// Demonstrates use of a sentinel value
#include "stdio.h"

int main() {
    int sentinel = 0;

    while (sentinel != 1) {
        printf("Enter 1 to exit this loop or enter any other number to keep looping.\n");
        scanf("%d", &sentinel);
    }

    puts("You have exited the loop.");
}