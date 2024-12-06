#include <stdio.h>

int main() {
    int n, i;
    int max, second_max;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    max = second_max = array[0];

    for(i = 1; i < n; i++) {
        if(array[i] > max) {
            second_max = max;
            max = array[i];
        } else if(array[i] > second_max && array[i] != max) {
            second_max = array[i];
        }
    }

    printf("The second maximum value in the array is: %d\n", second_max);

    return 0;
}
