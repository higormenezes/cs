#include <stdio.h>

int main(void) {
    char *s = "hi!";

    printf("%s\n", s);
    printf("%p\n", s);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);

    printf("%c = %c\n", s[0], *(s + 0));
    printf("%c = %c\n", s[1], *(s + 1));
    printf("%c = %c\n", s[2], *(s + 2));

    return 0;
}
