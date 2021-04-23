// Converts a binary number to a decimal

#include "stdio.h"
#include <math.h>

int main() {
    int binary, origBin, decimal = 0, remainder, num = 0, counter = 0;
    printf("Enter a number in binary: ");
    scanf("%d", &binary);
    origBin = binary;

    while(binary != 0) {
        // get the ones digit
        remainder = binary % 10;
        // num holds what power of 2 we are on
        num = pow(2, counter);
        // calculate binary to decimal
        decimal = remainder * num + decimal;
        // add to the counter for next iteration
        counter++;
        // take out number in the ones digit
        binary /= 10;
    }

    printf("Binary to Decimal = %d\n", decimal);
}