// Determines whether an inputted number is even or odd

#include <stdio.h>

int main(void){
    int integer;

    puts("Enter an integer:");
    scanf("%d", &integer);

    if ( (integer % 2) == 0 ) {
        puts("The number is even.");
    } else {
        puts("The number is odd.");
    }
}