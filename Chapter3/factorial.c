// Calculates the factorial of the inputted number

#include "stdio.h"

int main() {
    int num, result = 1, origNum;
    printf("Enter a Non-Negative Number: ");
    scanf("%d", &num);
    origNum = num;

    while(num > 0) {
        result = result * num;
        num--;
    }

    printf("The factorial of %d is %d\n", origNum, result);
}