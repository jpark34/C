// Program to find the largest number that was inputted by the user
#include "stdio.h"

int main() {
    int counter = 0;
    int num = 0;
    int largestNum = 0;

    while (counter <= 10) {
        printf("Enter a number:\n");
        scanf("%d", &num);

        if (num > largestNum) {
            largestNum = num;
        }

        counter++;
    }

    printf("The largest Number Entered is: %d\n", largestNum);
}