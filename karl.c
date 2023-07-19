#include <stdio.h>
#include <math.h>

int main() {
    int num1, num2, result;
    
    // Input the numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    // Perform modulo operation
    result = num1 % num2;
    
    // Output the result
    printf("The result of %d %% %d is: %d\n", num1, num2, result);
    
    return 0;
}
