#include <stdio.h>
#include <string.h>

#define MAX_STRING 80

int main()
{
    char astring[MAX_STRING];
    int i = 0;
    int a_count = 0;
    fgets(astring, MAX_STRING, stdin);
    
    for (i = 0; i < strlen(astring); i++) {
        if (astring[i] == 'a') {
            printf("Character at index %d is a!\n", i);
            a_count++;
        }
    }
    
    printf("You typed %d a characters\n", a_count);

    return 0;
}
