#include <stdio.h>

int main()
{
    int result = 0;

    for (int i = 0; i < 101; i++) {
        result = result + i;
    }
    printf("The result is %d\n", result);

    return 0;
}
