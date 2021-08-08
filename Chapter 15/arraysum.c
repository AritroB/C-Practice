#include <stdio.h>
#define NUM_STUDENTS 10

int main(void)
{
    int Exam1[NUM_STUDENTS];
    int Exam2[NUM_STUDENTS];
    int Total[NUM_STUDENTS];

    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        printf("Input Exam 1 score for student %d : ", i);
        scanf("%d", &Exam1[i]);
    }
    printf("\n");

    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        printf("Input Exam 2 score for student %d : ", i);
        scanf("%d", &Exam2[i]);
    }
    printf("\n");

    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        Total[i] = Exam1[i] + Exam2[i];
    }

    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        printf("Total for Student %d = %d\n", i, Total[i]);
    }
}