#include <stdio.h>

int main(void)
{
    int number_1 = 3;
    int number_2 = 8;
    double result;

    /* An integer divided by an integer gives an integer.
     * If we want to get a floating-point result from integer division,
     * we have to do something called typecasting.
     *
     * Typecasting is turning one data type into another data type.
     */
    result = (float)number_1 / (float)number_2;

    /* Let's see what this gives us. */
    printf("%d divided by %d is %.3f\n", number_1, number_2, result);
}
