#include <stdio.h>

int main(void)
{
    int number_1 = 5;
    int number_2 = 3;

    if (number_1 > number_2) {
        printf("%d is greater than %d\n", number_1, number_2);
    }
    else if (number_1 < number_2) {
        printf("%d is less than %d\n", number_1, number_2);
    }
    else {
        printf("%d is equal to %d\n", number_1, number_2);
    }

    return 0;
}
