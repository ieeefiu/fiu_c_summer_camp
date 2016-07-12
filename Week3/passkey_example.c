#include <stdio.h>

int main()
{
    int number;

    printf("Enter the passkey\n");
    scanf("%d", &number);

    printf("My number is %d\n", number);

    if (number == 6) {
        printf("You opened the door!\n");
    }
    else {
        printf("You don't have the key.\n");
    }

    return 0;
}
