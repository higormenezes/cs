#include <stdio.h>
#include <string.h>


typedef struct {
    char name[45];
    char number[16];
} person;

// Linear search O(n)
int main (void) {
    person people[2];

    strcpy(people[0].name, "Carter");
    strcpy(people[0].number, "+1-617-495-1000");

    strcpy(people[1].name, "David");
    strcpy(people[1].number, "+1-949-468-2750");

    char name[45];
    printf("Name: ");
    scanf("%s", name);

    for (int i = 0; i < 2; i++) {
        if (strcmp(people[i].name, name) == 0) {
            printf("Found: %s\n", people[i].number);
            return 0;
        }
    }

    printf("Not found\n");
    return 1;
}