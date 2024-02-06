#include <stdio.h>

int main() {
    int num1, num2, sum, diff, mul, div;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    sum = num1 + num2;
    diff = num2 - num1;
    mul = num1 * num2;
    div = num2 / num1;
    
    printf("The sum of %d and %d is %d.", num1, num2, sum);
    printf("The diff of %d and %d is %d", num1,num2,diff);
    printf("The mul of %d and %d is %d",num1,num2,mul);
    printf("The div of %d and %d is %d",num1,num2,diff);
    
    return 0;
}
