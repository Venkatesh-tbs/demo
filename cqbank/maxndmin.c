#include<stdio.h>
int main(){
    int n , i , max , min;
    printf(" enter the number of element :");
    scanf("%d",&n);
    int arr[n];
 printf(" enter %d number : \n",n);
 for ( i = 0; i < n; i++)
 {
    scanf("%d",&arr[i]);
 }
 
 max = min = arr[0];
    for ( i = 1; i < n; i++)
    {
        if (arr[i] > max )
        {
         max = arr{i};
         }
         if (arr[i] < min )
        {
         min = arr{i};
         }
        }
    printf(" the max value is %d",max);
         printf(" the min value is %d",min);
}

 