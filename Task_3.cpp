#include <stdio.h>

int main() {
    int N;
    printf("Array Size = ");
    scanf("%d", &N);

    int arr[N], freq[N];
    
    for (int i = 0; i < N; i++) {
        freq[i] = 0;
    }

    for (int i = 0; i < N; i++) {
        printf("Element %d = ", i + 1);
        scanf("%d", &arr[i]);
    }


    for (int i = 0; i < N; i++) {
        freq[arr[i]]++;
    }


    int found = 0;
    printf("Output: ");
    for (int i = 0; i < N; i++) {
        if (freq[i] > 1) {
            printf("Number %d  ", i);
            found = 1;
        }
    }

    if (found)
        printf("in array occur more than once.\n");
    else
        printf("No duplicates found.\n");

    return 0;
}

