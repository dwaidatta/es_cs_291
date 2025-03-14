#include <stdio.h>

int main() {
    int subject1, subject2, subject3, subject4, subject5;
    int maxMarksPerSubject;
    int totalMarksObtained, totalMaxMarks;
    float average, percentage;
    char grade;

    // Input maximum marks per subject
    printf("Enter the maximum marks per subject: ");
    scanf("%d", &maxMarksPerSubject);

    // Input marks for five subjects
    printf("Enter marks for Subject 1 (0-%d): ", maxMarksPerSubject);
    scanf("%d", &subject1);
    printf("Enter marks for Subject 2 (0-%d): ", maxMarksPerSubject);
    scanf("%d", &subject2);
    printf("Enter marks for Subject 3 (0-%d): ", maxMarksPerSubject);
    scanf("%d", &subject3);
    printf("Enter marks for Subject 4 (0-%d): ", maxMarksPerSubject);
    scanf("%d", &subject4);
    printf("Enter marks for Subject 5 (0-%d): ", maxMarksPerSubject);
    scanf("%d", &subject5);

    // Calculate total marks obtained and total maximum marks
    totalMarksObtained = subject1 + subject2 + subject3 + subject4 + subject5;
    totalMaxMarks = maxMarksPerSubject * 5;

    // Calculate average and percentage
    average = (float)totalMarksObtained / 5;
    percentage = ((float)totalMarksObtained / totalMaxMarks) * 100;

    // Assign grade based on percentage
    if (percentage >= 90) {
        grade = 'O';
    } else if (percentage >= 80) {
        grade = 'E';
    } else if (percentage >= 70) {
        grade = 'A';
    } else if (percentage >= 60) {
        grade = 'B';
    } else if (percentage >= 50) {
        grade = 'C';
    } else if (percentage >= 40) {
        grade = 'D';
    } else {
        grade = 'F'; // FAIL
    }

    // Output results
    printf("\nTotal Marks Obtained: %d\n", totalMarksObtained);
    printf("Total Maximum Marks: %d\n", totalMaxMarks);
    printf("Average Marks: %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);
    
    // Print "FAIL" instead of 'F'
    if (grade == 'F') {
        printf("Grade: FAIL\n");
    } else {
        printf("Grade: %c\n", grade);
    }

    return 0;
}
