# include <stdio.h>

int main() {
    int num1;
    int num2;

    printf("Enter two integers: \n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    printf("The sum is: %d", num1 + num2);
    return 0;
}