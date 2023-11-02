#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define an appropriate struct
typedef struct {
	char date[11];
	char time[6];
	int steps;
} FITNESS_DATA;

// Define any additional variables here


// This is your helper function. Do not change it in any way.
// Inputs: character array representing a row; the delimiter character
// Ouputs: date character array; time character array; steps character array
void tokeniseRecord(const char *input, const char *delimiter,
                    char *date, char *time, char *steps) {
    // Create a copy of the input string as strtok modifies the string
    char *inputCopy = strdup(input);
    
    // Tokenize the copied string
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
    
    // Free the duplicated string
    free(inputCopy);

}

int main() {
// Open the csv file
    FILE *file = fopen("FitnessData_2023.csv", "r");
    if (!file) {
        perror("Error opening file");
        return 1;
    }

    // Read the records
    int recordCount = 0;
    char buffer[100];  // Make room for maximum 100 characters per line

    while (fgets(buffer, sizeof(buffer), file)) {
        recordCount++;
    }

    // Print the number of records
    printf("Number of records in file: %d\n", recordCount);

    // 'Rewind' the file to the start
    rewind(file);

    // Create an array of 'FITNESS_DATA' to store the data
    FITNESS_DATA data[recordCount];

    // Read and store the data in the array 'data'
    for (int i = 0; i < recordCount; i++) {
        fgets(buffer, sizeof(buffer), file);
        char date[11], time[6], steps[10];
        tokeniseRecord(buffer, ",", date, time, steps);
        strcpy(data[i].date, date);
        strcpy(data[i].time, time);
        data[i].steps = atoi(steps);
    }

    // Print the first three records
    for (int i = 0; i < 3; i++) {
        printf("%s/%s/%d\n", data[i].date, data[i].time, data[i].steps);
    }

    // Close the file
    fclose(file);

    return 0;
}