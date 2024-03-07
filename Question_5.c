// WAP to check input char for uppercase, lowercase,digits,other character
#include <stdio.h>

int main() {
    char ch;
    int uppercase = 0, lowercase = 0, digits = 0, others = 0; // int is for count 

    printf("Enter a string: ");

    while ((ch = getchar()) != '\n') {
        if (ch >= 'A' && ch <= 'Z') {
            uppercase++;
        } else if (ch >= 'a' && ch <= 'z') {
            lowercase++;
        } else if (ch >= '0' && ch <= '9') {
            digits++;
        } else {
            others++;
        }
    }

    printf("Uppercase letters: %d\n", uppercase);
    printf("Lowercase letters: %d\n", lowercase);
    printf("Digits: %d\n", digits);
    printf("Other characters: %d\n", others);

    return 0;
}
