#include<stdio.h>
/*b. Write a C Program 1 to 100 odd number print*/
int main()
{
    int i;
    printf("odd number between 1 to 100 : ");
    for(i=0; i<=100; i++)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
        }
    }
    return 0;

}
