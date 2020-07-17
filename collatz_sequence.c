//Collatz Sequence
#include<stdio.h>
int main()
{
    int num,count=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(num!=1)
    {
            printf("%d ",num);
            if(num%2==0)
            {
                num=num/2;
                count=count+1;
            }
            else
            {
                num=3*num+1;
                count=count+1; 
            }
    }
    printf("%d ",num);
    printf("\nIt took %d steps.",count);
    return 0;
}
    
