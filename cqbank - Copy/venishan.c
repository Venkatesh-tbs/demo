#include<stdio.h>
int main()
{
    int a,b;
    printf("enetr two number:");
    scanf("%d %d", &a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the swap number:a=%d,b=%d",a , b );
}