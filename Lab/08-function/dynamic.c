#include <stdio.h>

void dynamic(int first, int second, ...) {
    printf("first = %d, second = %d\n", first, second);
}

int main() {
    printf("Variable numbers of arguments\n");
    dynamic(1, 2, 3);
    dynamic(4, 5, 6, 7);
    return 0;
}
