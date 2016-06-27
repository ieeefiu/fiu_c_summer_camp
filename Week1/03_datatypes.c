#include <stdio.h>

int main(void)
{
    /* An integer is a whole number. It can be positive or negative.  */
    int integer_example = 58;

    /* A character is a single letter. */
    char character_example = 'A';

    /* A float is a number with a decimal point */
    float float_example = 8.3231;

    /* A double is a more precise float. */
    double double_example = 5.2325788327;

    /* Each data type uses a different format specifier in printf. */
    printf("This is our integer: %d\n", integer_example);
    printf("This is our character: %c\n", character_example);
    printf("This is our float: %f\n", float_example);
    printf("This is our double: %f\n", double_example);

    return 0;
}
