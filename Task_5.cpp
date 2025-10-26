#include <stdio.h>

int main() {
    char input[200];
    char temp[50];
    int count = 0;  
    int i = 0;      

    printf("Enter a string: ");
    scanf("%[^\n]", input); 

   
    while (input[i] != '\0') {

        
        if (sscanf(&input[i], "%[ \t\n]", temp) == 1) {
          
            int j = 0;
            while (temp[j] != '\0') {  
                count++;
                j++;
            }

            i += j;
        }
        else {
            i++;
        }
    }

    printf("Number of whitespace characters: %d\n", count);
    return 0;
}

