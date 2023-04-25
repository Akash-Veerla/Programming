/*1 
  01
  101 
  0101 
  10101*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int x;
    printf("Input No.of Rows:");
    scanf("%d",&x);
    for(int i=0;i<x;i++)
    {
        for(int j=1;j<=(i+1);j++)
        {
           if((i+j)%2==0) 
           printf("0 ");
           else
           printf("1 ");
        }
        printf("\n");
    }
}

