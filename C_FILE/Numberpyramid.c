/*1
 2 3
4 5 6 */
#include<stdio.h>
void main()
{
    int i,j,x=1,n;
    printf("Input no.of Rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=((2*n)-1);j++)
        {
            if(j>=n-(i-1)&&j<=n+(i-1))
            {
                if((i+j)%2==0)
                {
                    printf("%2d",x);
                    x=x+1;
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}