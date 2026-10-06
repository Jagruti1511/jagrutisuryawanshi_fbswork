#include <stdio.h>

struct Student
{
    int id;
    float marks;
};

void changeMarks(struct Student s)
{
    s.marks = 95;
    
    printf("Inside function = %.2f\n", s.marks);
}

void main()
{
    struct Student s1;

    s1.id = 101;
    s1.marks = 80;

    printf("Before function = %.2f\n", s1.marks);

    changeMarks(s1);

    printf("After function = %.2f\n", s1.marks);

}