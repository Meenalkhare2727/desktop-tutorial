// Grade of a student...
#include <stdio.h>

int main() {
    int marks[5];
    int totalMarks = 0;

    
    for (int i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        totalMarks = totalMarks + marks[i];
    }

    
    char grade;
    if  (totalMarks >= 80) {
        grade = 'A';
    } else if (totalMarks >= 70) {
        grade = 'B';
    } else if (totalMarks >= 60) {
        grade = 'C';
    } else {
        grade = 'F';
    }

    printf("Grade: %c\n", grade);

    return 0;
}
