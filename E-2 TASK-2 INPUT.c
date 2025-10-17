//Ajay Babu Chavan,UIN:-251P081,Year:-F.E,Division:-D
#include <stdio.h>

int main() {
    int num1, num2, sum = 0, i;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    for(i = num1 + 1; i < num2; i++) {
        if(i % 2 != 0) {
            sum = sum + i;
        }
    }

    printf("Sum of odd numbers between %d and %d is %d\n", num1, num2, sum);
    return 0;

}
