#include <stdio.h>
 int main() {
  int n, i , sum = 0;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  int arr[n];
 
  printf("Enter %d elements:\n", n);
  for(i = 0; i < n; i++) {
  scanf("%d", &arr[i]);
  sum +=arr[i];
  }
printf(" sum of all the element = %d",sum);
  return 0;
 }