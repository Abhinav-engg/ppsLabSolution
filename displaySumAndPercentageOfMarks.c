#include <stdio.h>
int main(){
    int mathsMarks,chemistryMarks,physicsMarks,englishMarks,hindiMarks,totalMarks;
    float maxMarks;
    printf("Enter the maximum marks: ");
    scanf("%f",&maxMarks);
    printf("Enter marks obtained in Maths: ");
    scanf("%d",&mathsMarks);
    printf("Enter marks obtained in Chemistry: ");
    scanf("%d",&chemistryMarks);
    printf("Enter marks obtained in Physics: ");
    scanf("%d",&physicsMarks);
    printf("Enter marks obtained in English: ");
    scanf("%d",&englishMarks);
    printf("Enter marks obtained in Hindi: ");
    scanf("%d",&hindiMarks);
    totalMarks = mathsMarks + chemistryMarks + physicsMarks + englishMarks + hindiMarks;
    printf("Total Marks: %d\n", totalMarks);
    float percentage = (totalMarks / (maxMarks * 5)) * maxMarks;
    printf("Percentage: %.1f%%\n", percentage);
}
