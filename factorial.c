#Factorial Finder - The Factorial of a positive integer, n, is defined as the product of the sequence n, n-1, n-2, ...1 and the factorial of zero, 0, is defined as being 1. Solve this using both loops and recursion.
#include<stdio.h>
int fact(int num);
int main()
{
    int num;
    print:printf("Enter the number to find the factorial: ");
    scanf("%d",&num);
    while(num<0)
    {
        printf("Factorial cannot be executed for a negative number\n");
        goto print;
    }
    printf("The factorial of a given number is: %d",fact(num));
}
int fact(int num)
{
    if(num==0)
        return 1 ;
    else
        return num*fact(num-1);
}