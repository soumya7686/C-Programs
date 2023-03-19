# include <stdio.h>

int main() {
    int first;
    int second;
    int temp; //temp variable to swap the nos

    printf("Enter first number: \n");
    scanf("%d", &first);

    printf("Enter second number: \n");
    scanf("%d", &second);

    //assigning first number to temp
    temp = first;

    //assigning second number to first
    first = second;

    //assigning temp value to second
    second = temp;

    printf("After swapping, first number = %d \n", first);
    printf("After swapping, second number = %d", second);
    return 0;
}