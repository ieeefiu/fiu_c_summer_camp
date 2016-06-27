#include <stdio.h>

int main(void)
{
    /* Let's take some user input with our operators */
    int number_1;
    int number_2;
    int result;
    double result_float;
    
    /* Ask the user for two numbers */
    printf("Enter a number: ");
    scanf("%d", &number_1);
    printf("Enter another number: ");
    scanf("%d", &number_2);
    
    result = number_1 + number_2;
    printf("%d plus %d is %d\n", number_1, number_2, result);

    result = number_1 - number_2;
    printf("%d minus %d is %d\n", number_1, number_2, result);

    result = number_1 * number_2;
    printf("%d times %d is %d\n", number_1, number_2, result);

    result = number_1 / number_2;
    printf("%d divided by %d is %d\n", number_1, number_2, result);

    result = number_1 % number_2;
    printf("The remainder of %d divided by %d is %d\n",
           number_1, number_2, result);

    result_float = (float)number_1 / (float)number_2;
    printf("The floating point result of %d divided by %d is %.3f\n"
           , number_1, number_2, result_float);
    
    return 0;
}
