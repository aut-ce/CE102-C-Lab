#include <stdio.h>
#include <stdbool.h>
#include <string.h>
  
bool checkIsUgly1(int n){
    while(n % 2 == 0)
        n /= 2;
    while(n % 3 == 0)
        n /= 3;
    while(n % 5 == 0)
        n /= 5;

    if (n == 1)
        return true;
    else
        return false;
}

bool checkIsUgly2(int n){
    if(n % 2 == 0){
        n /= 2;
        checkIsUgly2(n);
    }
    else if(n % 3 == 0){
        n /= 3;
        checkIsUgly2(n);
    }
    else if(n % 5 == 0){
        n /= 5;
        checkIsUgly2(n);
    }
    else if(n == 1){
        return true;
    }
    else {
        return false;
    }
}

int main() 
{ 
    int n;

    printf("Enter a number:");

    scanf("%d", &n);

    printf("checkIsUgly1: %s\n", checkIsUgly1(n) ? "true" : "false");
    printf("checkIsUgly2: %s\n", checkIsUgly2(n) ? "true" : "false");
  
    return 0; 
} 