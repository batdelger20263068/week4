#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct {
    int number;
    char name[20];
    double grade;
} Student;

Student *find_student(Student a[], int b, const char *c);

Student *find_student(Student a[], int b, const char *c)
{
    int d;

    for (d = 0; d < b; d++)
    {
        if (strcmp(a[d].name, c) == 0)
            return &a[d];
    }

    return NULL;
}

int main(void)
{
    Student a[3] = {
        {1, "Kim", 4.3},
        {2, "Lee", 3.8},
        {3, "Park", 4.1}
    };

    char b[20];
    double c;
    Student *d;
    int e;

    scanf("%19s %lf", b, &c);

    d = find_student(a, 3, b);

    if (d == NULL)
    {
        printf("not found\n");
    }
    else
    {
        d->grade = c;

        for (e = 0; e < 3; e++)
            printf("%d %s %.1f\n", a[e].number, a[e].name, a[e].grade);
    }

    return 0;
}
