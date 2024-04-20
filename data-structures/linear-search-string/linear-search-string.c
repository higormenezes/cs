#include <stdio.h>
#include <string.h>

// Linear search O(n)
int main (void) {
    char strings[6][99] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};

    char s[99];
    printf("String: ");
    scanf("%s", s);

    int length = sizeof(strings) / sizeof(strings[0]);
    for (int i = 0; i < length; i++) {
        if (strcmp(strings[i], s) == 0) {
            printf("Found\n");
            return 0;
        }
    }

    printf("Not found\n");
    return 1;
}