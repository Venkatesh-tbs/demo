#include<stdio.h>
int main(){
    int n , i;
    printf(" enter the number of element :");
    scanf("%d",&n);
    int arr[n];
 printf(" enter %d number : \n",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        sum +=arr[i];
    }
 printf("number of element in the arry\n");
      for ( i = n-1; i >=0; i--)
    {
        printf("%d",arr[i]);
    }
    
}

 