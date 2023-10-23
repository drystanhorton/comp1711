#include <stdio.h>

int main() {
    int array[5];
    printf("Enter 5 integers");

    for (int y; y < 5; y++) {
        scanf("%d", &array[y]);
    }

    for (int i; i < 5; i++) {
        printf("%d",array[i]);
    }
}