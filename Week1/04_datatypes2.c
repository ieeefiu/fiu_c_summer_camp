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

    /* What about division? */
    result = number_1 / number_2;
    printf("%d divided by %d is %d\n", number_1, number_2, result);
    printf("Something about that doesn't seem right...\n");
    
    return 0;
}
