//WAP to print binary octal hexadecimal  // i will try this using bitwise operators
#include <stdio.h>

void decimalToBinary(int num) {
    if (num > 1) {                         //2>1
        decimalToBinary(num / 2);          // 2/2 =1
    }
    printf("%d", num % 2);                     // 2%2 =0
}


void decimalToOctal(int num) {
    if (num > 7) {
        decimalToOctal(num / 8);
    }
    printf("%d", num % 8);
}


void decimalToHexadecimal(int num) {
    if (num > 15) {
        decimalToHexadecimal(num / 16);
    }
    int remainder = num % 16;
    if (remainder < 10) {
        printf("%d", remainder);
    } else {
        printf("%c", 'A' + remainder - 10);
    }
}

int main() {
    int num;

    printf("terminal> cprogramming Test \nEnter Number: ");
    
    scanf("%d", &num);

    
    printf("Given Number: %d\n", num);
    printf("Binary equivalent: ");
    decimalToBinary(num);
    printf("\nOctal equivalent: ");
    decimalToOctal(num);
    printf("\nHexadecimal equivalent: ");
    decimalToHexadecimal(num);
    printf("\n");

    return 0;
}
