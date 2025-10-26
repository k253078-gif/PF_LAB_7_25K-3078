#include <stdio.h>

int main() {
    char input[100], output[100];

    printf("Enter a string: ");
    scanf("%[^\n]", input);

    int i = 0, j = 0;
    while (input[i] != '\0') {

        if (!(input[i] >= '0' && input[i] <= '9')) {
            output[j++] = input[i];
        }
        i++;
    }
    output[j] = '\0'; 
    printf("String without numbers: %s\n", output);

    return 0;
}

