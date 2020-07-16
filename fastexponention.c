#Fast Exponentiation - Ask the user to enter 2 integers a and b and output a^b (i.e. pow(a,b)) in O(lg n) time complexity.
#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    printf("Enetr base and exponent: ");
    scanf("%d%d",&x,&y);
    printf("%0.0f is the power of %d^%d",pow(x,y),x,y);
    return 0;
}