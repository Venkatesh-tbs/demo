#include<stdio.h>
int main()
{
   int arr[2][2];
   for(int row=0;row<2;row++)
{
for(int col=0;col<2;col++)
{
 scanf("%d",&arr[row][col]);
}
}
for(int row=0;row<2;row++)
{
for(int col=0;col<2;col++)
{
 printf("%d ",arr[col][row]);
}
printf("\n");
}
return 0;
}