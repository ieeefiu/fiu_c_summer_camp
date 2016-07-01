#include <stdio.h>

int main(void)
{
    int option = 0;

    printf("Please make a selection\n"
           "1. Say hello\n"
           "2. Add 3 and 5\n"
           "3. Print a bunch of garbage\n"
           "4. Quit\n\n");

    scanf("%d", &option);
    printf("\n");
    
    switch (option) {
    case 1:
        printf("Hello!\n");
        break;
    case 2:
        printf("3 plus 5 is 8\n");
        break;
    case 3:
        printf("asdfahfjhakfbawkejhfawbkeuybcaekyvakhjcbeaksjhcb\n");
        break;
    case 4:
        printf("Quitting\n");
        break;
    default:
        printf("Invalid input, still quitting\n");
        break;
    }

    return 0;
}
