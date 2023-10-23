#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define an appropriate struct
typedef struct {
	char date[11];
	char time[6];
	int steps;
} FITNESS_DATA;

void tokeniseRecord(const char *input, const char *delimiter,
                    char *date, char *time, char *steps) {
    // create a copy of the input string as strtok modifies the string
    char *inputCopy = strdup(input);
    
    // tokenize the copied string
    char *token = strtok(inputCopy, delimiter);
    if (token != NULL) {        strcpy(date, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(time, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(steps, token);
    }
    
    // free the duplicated string
    free(inputCopy);
}

int main()
{
    
}