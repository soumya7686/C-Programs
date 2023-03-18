#include<stdio.h>

int sum(int n); //Function prototype

int main() {
    printf("Sum is: %d", sum(8));
    return 0;
}

//Recursive function declaration
int sum(int n) {
    if(n == 1) {
        return 1;
    }

    int sumNm1 = sum(n - 1);
    int sumN = sumNm1 + n;
    return sumN;
}