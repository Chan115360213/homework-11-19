#include <stdio.h>
#define STUDENT 3
#define EXAMS 4
void printArray(const int grades[][EXAMS], int pupils, int tests);
int min(const int grades[][EXAMS], int pupils, int tests);
int max(const int grades[][EXAMS], int pupils, int tests);
double average(const int setOfGrades[], int tests);
int main()
{
    int student;
    const int studentGrades[STUDENT][EXAMS] = { { 77,68,86,73 }, { 96,87,89,78 }, { 70,90,86,81 } };
    printf("The array is : \n");
	printArray(studentGrades, STUDENT, EXAMS);

    printf("\n\nLowest grade: %d\nHighest grade: %d\n", min(studentGrades, STUDENT, EXAMS), max(studentGrades, STUDENT, EXAMS));
	for (student = 0; student < STUDENT; student++)
	{
		printf("The average grade for student %d is %.2f\n",student , average(studentGrades[student], EXAMS));
	}
}


void printArray(const int grades[][EXAMS], int pupils, int tests)
{
    printf("                      [0] [1] [2] [3]");
    for (int i = 0; i < pupils; i++)
    {
        printf("\nstudentGrades[%d]", i);
        for (int j = 0; j < tests; j++)
            printf("%-5d ", grades[i][j]);
        
    }
}
int min(const int grades[][EXAMS], int pupils, int tests)
{
	int lowGrade = 100;
    for (int i = 0; i < pupils; i++)
    {
		for (int j = 0; j < tests; j++)
		{
			if (grades[i][j] < lowGrade)
				lowGrade = grades[i][j];
		}
    }
    return lowGrade;
}

int max(const int grades[][EXAMS], int pupils, int tests)
{
	int highGrade = 0;
	for (int i = 0; i < pupils; i++)
	{
		for (int j = 0; j < tests; j++)
		{
			if (grades[i][j] > highGrade)
				highGrade = grades[i][j];
		}
	}
	return highGrade;
}

double average(const int setOfGrades[], int tests)
{
	int total = 0;
	for (int i = 0; i < tests; i++)
		total += setOfGrades[i];
	return (double)total / tests;
}