#include <stdio.h>

int main() {
    int mark;

    printf("What is your mark? \n");
    scanf("%d", &mark);

if (mark <= 100 && mark >= 0) {
    if (mark == 0) {
        printf("The mark of %d is a zero \n", mark);
    }
    else if (mark < 40) {
        printf("The mark of %d is a fail \n", mark);
    }
    else 
    {
        printf("The mark of %d is a pass \n", mark);
    }
}
else{
    printf("Marks must be between 0 and 100");
}
    return 0;
}