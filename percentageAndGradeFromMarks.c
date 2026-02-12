#include <stdio.h>
int main(){
    int mathsMarks, chemistryMarks, physicsMarks, englishMarks, hindiMarks;
    int totalMarks;
    float percentage;
    char grade;

    printf("Enter marks obtained in Maths: ");
    scanf("%d", &mathsMarks);
    printf("Enter marks obtained in Chemistry: ");
    scanf("%d", &chemistryMarks);
    printf("Enter marks obtained in Physics: ");
    scanf("%d", &physicsMarks);
    printf("Enter marks obtained in English: ");
    scanf("%d", &englishMarks);
    printf("Enter marks obtained in Hindi: ");
    scanf("%d", &hindiMarks);

    totalMarks = mathsMarks + chemistryMarks + physicsMarks + englishMarks + hindiMarks;
    percentage = (totalMarks / 500.0f) * 100.0f;

    if (percentage >= 90.0f && percentage <= 100.0f) {
        grade = 'A';
    } else if (percentage >= 80.0f) {
        grade = 'B';
    } else if (percentage >= 60.0f) {
        grade = 'C';
    } else {
        grade = 'D';
    }

    printf("Total Marks: %d\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}
