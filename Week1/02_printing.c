/* FIU C Programming Summer Camp
 *
 * Example 2
 * Printing a name
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
    char name[80];
    
    printf("What is your name?\n");
    
    scanf("%s", name);
    
    printf("Hello, %s\n", name);
    
    return 0;
}
