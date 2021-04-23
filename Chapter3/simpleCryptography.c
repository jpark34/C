// Encrypt and decrypt a message
// Takes a 4 digit number as input
// Encrypt by adding 7 to each digit, then swap the 1st digit with the 3rd digit, and the 2nd digit with the 4th digit
// Decrypt by swapping the 4th with the 2nd, then 3rd with the 1st, then subtract 7 from each digit

#include "stdio.h"

int main() {
    int num, encrypted = 0, decrypted = 0, origNum;
    int counter, digit1, digit2, digit3, digit4;
    printf("Please Enter a 4 Digit Number: ");
    scanf("%d", &num);
    origNum = num;
    printf("You Entered %d\n", origNum);

    // Loop to add 7 to every digit
    for(counter = 0; counter < 4; counter++) {
        // separate the digits
        encrypted = num % 10;
        num = num / 10;
        // encryption algorithm
        encrypted = (encrypted + 7) % 10;
        // swap the first with the third and the second with the fourth
        switch(counter) {
            case 0: digit3 = encrypted;
            break;
            case 1: digit4 = encrypted;
            break;
            case 2: digit1 = encrypted;
            break;
            case 3: digit2 = encrypted;
        }
    }

    printf("The Encrypted Number is: %d%d%d%d\n", digit4, digit3, digit2, digit1);
}