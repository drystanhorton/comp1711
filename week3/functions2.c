#include <stdio.h>

float sum (float a, float b)
{
    float answer;
    answer = a + b;
    return answer;
}

int main () 
{
    float y = 2.0;
    float z = sum(5.0, y); // calling our new function

    printf ("The sum of 5 and %.0f is %.0f\n", y, z);
}