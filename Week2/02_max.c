#include <stdio.h>

int max(int number_1, int number_2);

int main(void)
{
    int result;

    result = max(10, 23);

    printf("The result is %d\n", result);

    return 0;
}

int max(int number_1, int number_2)
{
    if (number_1 > number_2) {
        return number_1;
    }
    else {
        return number_2;
    }
}
