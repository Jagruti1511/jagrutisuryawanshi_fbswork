#include <stdio.h>

//struct Student {
//    int id;
//};
//
//void main() {
//    struct Student s1;
//
//    s1.id = 10;
//
//    printf("Student ID: %d", s1.id);
//
//    
//}

struct Student {
    int id;
};

int main() {
    struct Student s1;

    printf("Enter Student ID: ");
    scanf("%d", &s1.id);

    printf("Student ID is: %d", s1.id);

    return 0;
}