#include <stdio.h>

struct Student
{
    int id;
    float marks;
};

int main()
{
    struct Student s[3];

    s[0].id = 101;
    s[0].marks = 80;

    s[1].id = 102;
    s[1].marks = 85;

    s[2].id = 103;
    s[2].marks = 90;

    for(int i = 0; i < 3; i++)
    {
        printf("Student %d\n", i + 1);
        printf("ID = %d\n", s[i].id);
        printf("Marks = %.2f\n\n", s[i].marks);
    }

    return 0;
}