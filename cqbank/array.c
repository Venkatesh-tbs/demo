#include <stdio.h>
 int main() {
  int n, i , sum;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  int arr[n];
 
  printf("Enter %d elements:\n", n);
  for(i = 0; i < n; i++) {
  scanf("%d", &arr[i]);
  }
 
  printf("Elements in the array are:\n");
  for(i = n -1; i >=0; i--) {
  printf("%d ", arr[i]);
  }
  return 0;
 }