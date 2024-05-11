#include <stdio.h>
//Write a C Program to check weather a given number positive or negative
int main()
{
    int number;


    printf("Enter a number: ");
    scanf("%d", &number);


    if (number > 0)
    {
        printf("%d is a positive number.", number);
    }
    else if (number < 0)
    {
        printf("%d is a negative number", number);
    }
    else
    {
        printf("The number is zero.");
    }

    return 0;
}
