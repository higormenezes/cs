#include <stdio.h>

int main() {
    int numberScores;
    printf("Total number of scores: ");
    scanf("%d", &numberScores);

    int scores[numberScores];
    int total = 0;
    for (int i = 0; i < numberScores; i++) {
        printf("Add the %d score: ", i + 1);
        scanf("%d", &scores[i]);
        total += scores[i];
    }

    printf("Average %f\n", (float) total / numberScores);
    return 0;
}