#include <stdio.h>
int swap(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int partition(int a[],int low,int high)
{
    int i = low,pivot,j;
    pivot = a[high];
    for(j=low;j<high;j++)
    {
        if(a[j]<pivot)
        {
            swap(&a[i],&a[j]);
            i++;
        }
    }
    swap(&a[i],&a[high]);
    return i;
}
int quickSort(int a[],int low,int high)
{
    if(low<high)
    {
        int p;
        p = partition(a,low,high);
        quickSort(a,low,p-1);
        quickSort(a,p+1,high);
    }
}
int main()
{
    int a[]= {1,6,8,4,2},i,n;
    n = sizeof(a)/sizeof(a[0]);
    quickSort(a,0,n - 1);
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}
