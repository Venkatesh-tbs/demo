#include<stdio.h>
int main(){
    int digit;
    printf("Enter  : ");
    scanf("%d", &digit);

switch (digit)
{
case 0: 
 printf("zero");
    break;
    case 1: 
 printf("one");
    break;

default:
printf("input invalid");
}
}