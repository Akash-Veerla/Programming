/*1       2       3       4       5
1       2       3       4
1       2       3
1       2
1*/
#include<stdio.h>
void main()
{
    int i,j,rows,n=1;
    printf("Input NO.of Rows:");
    scanf("%d",&rows);
    for(i=rows;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d\t",n);
            n=n+1;
        }
        printf("\n");
        n=1;
    }
}