#include <stdio.h>

int search(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int arr[10];
    int target, index;

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search for: ");
    scanf("%d", &target);

    index = search(arr, 10, target);

    if (index != -1)
        printf("Number found at index %d\n", index);
    else
        printf("Number not found in the array\n");

    return 0;
}

