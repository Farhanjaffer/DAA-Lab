#include <stdio.h>
int main() {
    int lowerBound = 0; 
    int upperBound = 100;
    printf("B: Think of an integer X. A will try to guess it.\n");
    while (lowerBound <= upperBound) {
        long int guess = (lowerBound + upperBound) / 2;
        char response;
        printf("A: Is your number %lld? (Enter 'b' for bigger, 's' for smaller, 'c' for correct): ", guess);
        scanf(" %c", &response);
        if (response == 'c') {
            printf("B: You got it!\n");
            break;
        } else if (response == 'b') {
            lowerBound = guess + 1;
        } else if (response == 's') {
            upperBound = guess - 1;
        } else {
            printf("B: Invalid response. Please enter 'b', 's', or 'c'.\n");
        }
    }
 return 0;
}