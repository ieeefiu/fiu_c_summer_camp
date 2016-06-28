#include <stdio.h>

/* function prototypes */
void say_hello(char *name);
int add_two_integers(int a, int b);

int main(void)
{
    int first;
    int second;
    int result;
    char name[80];
    
    printf("Enter a number: ");
    scanf("%d", &first);
    
    printf("Enter another number: ");
    scanf("%d", &second);
    
    printf("What's your name?\n");
    scanf("%s", name);
    
    say_hello(name);
    
    result = add_two_integers(first, second);
    printf("%d plus %d is %d\n", first, second, result);
    
    return 0;
}

/* function definitions */
void say_hello(char *name)
{
    printf("Hello, %s\n", name);
}

int add_two_integers(int a, int b)
{
    return a + b;
}
