#include <stdio.h>
//Problem-6: Write a C Program to accept two integers and check weather a number equal or not.
int main() {
    int number1, number2;


    printf("Enter the first number: ");
    scanf("%d", &number1);


    printf("Enter the second number: ");
    scanf("%d", &number2);


    if (number1 == number2) {
        printf("The numbers %d and %d are equal.", number1, number2);
    } else {
        printf("The numbers %d and %d are not equal.", number1, number2);
    }

    return 0;
}
