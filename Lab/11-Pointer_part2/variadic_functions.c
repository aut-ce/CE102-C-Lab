#include <stdio.h>
#include <stdarg.h>

double average (int count, ...) {
    va_list nums;
    va_start(nums, count); /* Requires the last fixed parameter */

    double sum = 0;
    for(int i = 0; i < count; i++) {
        sum += va_arg(nums, int); /* Increment nums to the next argument */
    }

    va_end(nums);

    printf ("%lf, %d\n", sum, count);
    return sum / count;
}

int main (){
    printf ("%lf", average(6, 3, 4, 2, 5, 6, 1));
}
