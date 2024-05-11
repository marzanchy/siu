#include<stdio.h>
//Write a C Program to perform Arithmetic operation.
int main()
{
    int number1, number2;

    printf("Enter first number : ");
    scanf("%d",&number1);

    printf("Enter second number : ");
    scanf("%d",&number2);

    printf(" Answer sum : %d", number1 + number2);

    printf(" Answer Minus : %d", number1 - number2);

    printf(" Answer Multiply : %d", number1 * number2);

    printf(" Answer Divide : %d", number1 / number2);
    return 0;
}
