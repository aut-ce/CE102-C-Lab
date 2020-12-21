/* C Program to Replace All Occurrence of a Character in a String */
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch, Newch;
    int i;
    
    printf("\n Please Enter any String: ");
    gets(str);
    
    printf("\n Please Enter the Character that you want to Search for: ");
    scanf("%c", &ch);
    
    getchar();
    
    printf("\n Please Enter the New Character: ");
    scanf("%c", &Newch);
    
    for(i = 0; i <= strlen(str); i++) {
        if(str[i] == ch) {
            str[i] = Newch;
        }
    }

    printf("\n The Final String after Replacing All Occurrences of '%c' with '%c' = %s", ch, Newch, str);
    return 0;
}
