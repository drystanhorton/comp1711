#include <stdio.h>

int main() {
    int loop = 1;
    int input;

    while (loop == 1) {
        printf("Enter a number between 1-100 or -1 to exit the program. \n");
        scanf("%d", &input);

        if (input == -1) {
            printf("Program exited \n");
            loop = 0;
        }
        else if (input <= 100 && input >= 0) {
            printf("You entered the number: %d \n", input);
        }
    }
}