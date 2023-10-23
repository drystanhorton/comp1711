#include <stdio.h>

int main() {
    int array[5] = {1,2,3,4,5};
    reverse_array(array);
}

void reverse_array(int array[]) {
    int new_array[5];

    for (int i = 0; i <= 5; i++) {
        new_array[i] = array[5 - i];
    }
}