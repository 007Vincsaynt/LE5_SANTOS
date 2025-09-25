#include <stdio.h>

int main() {
    int num;
    int sum = 0;

    printf("Enter numbers one by one (enter 0 or a negative number to stop):\n");

    while (1) {  
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num <= 0) {
            
            break;
        } else {
            
            sum += num;
        }
    }

    printf("\nThe total sum of all positive numbers entered is: %d\n", sum);

    return 0;
}
