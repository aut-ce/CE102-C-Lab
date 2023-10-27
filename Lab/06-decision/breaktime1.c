#include <stdio.h>
#include <stdbool.h>

int main () {

    printf("true = %d\tfalse = %d\n", true, false);
    if (3 * 4)
        printf ("Result of 3 * 4 is: %d\n", 3 * 4);
    if (3 * 4 == 12)
        printf ("Result of 3 * 4 == 12 is: %d\n", 3 * 4 == 12);
    if ('b') 
        printf ("ASCII code of 'b' is: %d\n", 'b');
    if (' ') 
        printf ("What is space ASCII code?\n");
    if ('\0')
        printf ("****the ascii code of \0 is 0****\n");
    printf ("You will learn more about \0 in \"String\". BOOOM!");

    return 0;
}