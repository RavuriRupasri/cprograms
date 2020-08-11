#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a,n,i,temp = 0,search;
    scanf("%d",&n);
    a = (int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    scanf("%d",a+i);
    scanf("%d",&search);
    for(i = 0;i<n;i++)
        if(*(a+i) == search){
            printf("The element is at position:%d",i + 1);
            temp = 1;
            break;
        }
    if(temp == 0)
    printf("The element is not in the array");
}