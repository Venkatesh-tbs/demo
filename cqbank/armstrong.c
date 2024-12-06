#include<stdio.h>
#include<math.h>
int main(){
    int num , copy , sum = 0 ,digit = 0 ;
    printf("Enter a number: ");
    scanf("%d", &num);
    copy = num ;
    while (copy>0)
    {
        copy /=10;
        digit++;
    }
    copy = num ;
    while (num>0)
    {
         sum = sum + pow((copy*10),   digit);
    }
    if (num=sum)
    {
        printf("a");
    }
    else
    {
        printf("n"); 
    }
    
} 