// Write a program to determine whether a student has passed or failed.
// To pass, a student requires a total 0f 40% and at least 33% in each subject.
// Assume there are three subjects and take the marks as input from the user

#include <stdio.h>
int main()
{
    int max_marks;
    int sub1, sub2, sub3;
    printf("Enter marks for sub1, sub2, sub3, max_marks respectively: ");
    scanf("%d %d %d %d", &sub1, &sub2, &sub3, &max_marks);
    float sub1_percent = ((float)sub1 / max_marks) * 100;
    float sub2_percent = ((float)sub2 / max_marks) * 100;
    float sub3_percent = ((float)sub3 / max_marks) * 100;
    float total_marks_of_student = sub1 + sub2 + sub3;
    float total_max_marks = 3 * max_marks;
    float aggregate_percent = ((float)total_marks_of_student / total_max_marks) * 100;
    if (sub1_percent >= 33 && sub2_percent >= 33 && sub3_percent >= 33 && aggregate_percent >= 40)
    {
        printf("You are pass!!");
    }
    else
    {
        printf("You are fail");
    }
    return 0;
}