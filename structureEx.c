#include<stdio.h>
#include<string.h>

struct student {
    int rollno;
    float cgpa;
    char name[20];
};

int main() {
    struct student S1;
    S1.cgpa = 7.8;
    S1.rollno = 20;
    strcpy(S1.name, "Soumya");

    printf("Student name is: %s \n", S1.name);
    printf("Student rollno is: %d \n", S1.rollno);
    printf("Student's CGPA is: %f \n", S1.cgpa);
    return 0;
}
