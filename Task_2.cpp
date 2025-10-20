#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
     printf("Array elements in normal order = ");
    for(int i = 0; i < n; i++) {
       printf("%d",arr[i]); 
    }
    
    printf("\nArray elements in reverse order = ");
    for(int i = n-1 ; i >= 0; i--) {
        printf("%d",arr[i]); 
    }
     
    return 0;
}
