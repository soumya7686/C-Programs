#include<stdio.h>

int sum(int a, int b); //Function prototype

int main() {
    int a;
    int b;

    printf("Enter value of a:");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    int s = sum(a, b);

    printf("The sum is: %d", s);
    return 0;
}

//function declaration
int sum(int a, int b) {
    return a + b;
}