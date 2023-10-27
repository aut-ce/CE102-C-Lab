#include <stdio.h>
#include <stdbool.h>

int main () {

    int a = 5;
    int b = 0;
    int c = printf("Condition\n" );

    if ( a && b || c) {
        printf("Line 1 - %d is true\n", c);
    } else {
        printf("Line 1 - Condition is not true\n" );
    }
        
    if ( printf("") && printf("I am true") ) {
        printf("Line 2 - Condition is true\n" );
    }
      
    return 0;
}