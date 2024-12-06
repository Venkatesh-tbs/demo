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
    }
 printf("number of element in the arry\n");
      for ( i = 0; i <= n; i++)
    {
        printf("%d",arr[i]);
    }
    
}

 