#include<stdio.h>
int main(){
int a  , flag = 0;
printf("enter num : ");
scanf("%d",a);
for ( int i = 2; i < a; i++)
{
    if (a%i!=0)
    {
      continue;
    }
    else{
        flag = 1 ;
        printf("not a prime ");
        break;
    }
    if (flag==0)
    {
        printf("its prime ");
    }
    
}
} 