#include <stdio.h>

int main(void)
{
    /* You can add, subtract, multiply, and divide numbers */
    int number_1 = 5;
    int number_2 = 6;
    int result;

    /* To assign a value to a variable, a single equals sign is used */
    result = number_1 + number_2;

    /* Let's see what the result is! */
    printf("%d plus %d is %d\n", number_1, number_2, result);

    /* Let's try subtraction now */
    result = number_1 - number_2;
    printf("%d minus %d is %d\n", number_1, number_2, result);

    /* Multiplication uses the * operator */
    result = number_1 * number_2;
    printf("%d times %d is %d\n", number_1, number_2, result);

    /* What about division? Let's change number_1 to 12. */
    number_1 = 12;
    result = number_1 / number_2;
    printf("%d divided by %d is %d\n", number_1, number_2, result);

    /* We can use the modulus operator % to get the remainder.
     * Let's change number_1 to 13 so we get a remainder.
     */
    number_1 = 13;
    result = number_1 % number_2;
    printf("The remainder of %d divided by %d is %d\n",
           number_1, number_2, result);

    /* What happens when we divide a smaller number by a larger number? 
     * Let's change number_1 to a smaller number and find out!    
     */
    number_1 = 2;
    result = number_1 / number_2;
    printf("%d divided by %d is %d\n"
           "Something about that doesn't seem right...\n",
           number_1, number_2, result);
    
    return 0;
}
