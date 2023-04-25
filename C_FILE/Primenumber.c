#include<stdio.h>
void main()
{
    int x,s=0;
    printf("Input A number:");
    scanf("%d",&x);
    for(int i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
            s=s+1;
        }
    }
    if(s==0)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not a Prime Number");
    }
}