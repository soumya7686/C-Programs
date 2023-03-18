#include<stdio.h>

int main() {
    int age = 22;
    int *ptr = &age;
    int value = *ptr;

    printf("%d", value);
    return 0;
}