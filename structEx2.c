#include<stdio.h>
#include<string.h>

struct student{
    char name[30];
    int rollno;
    float cgpa;
};

int main() {
    //Student 1's data
    struct student S1;
    S1.cgpa = 7.8;
    S1.rollno = 20;
    strcpy(S1.name, "Soumya");

    printf("Student 1's name is: %s \n", S1.name);
    printf("Student 1's rollno is: %d \n", S1.rollno);
    printf("Student 1's CGPA is: %f \n", S1.cgpa);

    //Student 2's data
    struct student S2;
    S2.cgpa = 7.9;
    S2.rollno = 21;
    strcpy(S2.name, "Rupali");

    printf("Student 2's name is: %s \n", S2.name);
    printf("Student 2's rollno is: %d \n", S2.rollno);
    printf("Student 2's CGPA is: %f \n", S2.cgpa);

    //Student 3's data
    struct student S3;
    S3.cgpa = 7.5;
    S3.rollno = 19;
    strcpy(S3.name, "Nikki");

    printf("Student 3's name is: %s \n", S3.name);
    printf("Student 3's rollno is: %d \n", S3.rollno);
    printf("Student 3's CGPA is: %f \n", S3.cgpa);
    return 0;
}