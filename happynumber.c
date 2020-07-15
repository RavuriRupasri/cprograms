#include <stdio.h>
int main()
{
    int num,sum1,x;
    printf("Enter the number\n");
    scanf("%d",&num);
    while(1)
    {
        if(num==4 || num== 16 || num== 37 || num== 58 || num==20 || num== 42 || num== 89 || num==145)
        {
            printf("It is not a happy number\n");
            break;
        }
        sum1=0;
        while(num>0)
        {         
            x=num%10;
            sum1=sum1+x*x;
            num=num/10;
        }
        if(sum1==1)
        {
            printf("It is a happy number\n");
            break;
        }
        num=sum1;
    }
    return 0;
}

