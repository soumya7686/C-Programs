# include <stdio.h>

int main() {
    char ch;

    printf("Enter any single character: \n");
    scanf("%c", &ch);

    printf("ASCII value of %c = %d", ch, ch);
    return 0;
}