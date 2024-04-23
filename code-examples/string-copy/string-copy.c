#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
    char s[200];
    printf("String: ");
    scanf("%s", s);
    int n = strlen(s);
    
    char *t = malloc(n + 1);
    for (int i = 0; i < n + 1; i++) {
        t[i] = s[i];
    }

    if (strlen(t) > 0) {
        t[0] = toupper(t[0]);
    }

    printf("%s\n", s);
    printf("%s\n", t);

    free(t);
    return 0;
}