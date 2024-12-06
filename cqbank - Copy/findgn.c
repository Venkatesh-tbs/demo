 #include <stdio.h>
 int main() {
    int x,c;
    printf("Enter a number (1 or 0): ");
    scanf("%d", &x);
    c = !x;
    printf("value of c = %d",c);
 }