#include <stdio.h>

int main() {
    int marks[5];
    int i, total = 0;

    printf("Enter marks of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }
    float average = (float)total / 5;
    printf("Total Marks: %d\n", total);
    printf("Average Marks: %.2f\n", average);

    return 0;
}