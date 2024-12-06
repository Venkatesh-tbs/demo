#include<stdio.h>
int main()
{
    int n=6,i,sum=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {

            printf("%d",i);
        sum=sum+i;
        }
    }
    printf("\n %d \n",sum);
    if(sum==n){
        printf("perfect number");
    }
    else
        printf("not perfect");
        return 0;
}