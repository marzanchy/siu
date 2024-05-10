#include<stdio.h>
/*a. Write a C Program 1 to 100 even number print*/
int main()
{
    int i;
    printf("Even number between 1 to 100 : ");
    for(i=1; i<=100; i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
