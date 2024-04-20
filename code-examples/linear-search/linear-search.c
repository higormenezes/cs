#include <stdio.h>


// Linear search O(n)
int main (void) {
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};

    int n;
    printf("Number: ");
    scanf("%i", &n);

    int length = sizeof(numbers) / sizeof(numbers[0]);
    for (int i = 0; i < length; i++) {
        if (numbers[i] == n) {
            printf("Found\n");
            return 0;
        }
    }

    printf("Not found\n");
    return 1;
}