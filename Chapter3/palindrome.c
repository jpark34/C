// Takes in a number and determines if it is a palindrom or not

#include "stdio.h"

int main() {
    int num, reverseNum = 0, originalNum, remainder;

    printf("Please enter a number in order to determine if it is a palindrome or not: ");
    scanf("%d", &num);
    originalNum = num;

    while (num != 0) {
        // get the ones digit in the remainder variable
        remainder = num % 10;
        // create the reverse of the inputted number
        reverseNum = reverseNum * 10 + remainder;
        // make num smaller by a factor of 10
        num /= 10;
    }


    if (originalNum == reverseNum) {
        printf("%d is a palindrome\n", originalNum);
    }
    else {
        printf("%d is not a palindrome\n", originalNum);
    }
}