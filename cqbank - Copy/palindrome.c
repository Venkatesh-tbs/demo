#include <stdio.h>
 int main() {
    int num, reversed = 0, original, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /=10;
    }
    if (original == reversed)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
 }
 printf