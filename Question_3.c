// fibonacci series upto n numbers......
#include <stdio.h>

void fibonacciSeries(int n) {
    int a = 0, b = 1, c;

    printf("Fibonacci Series up to %d numbers:\n", n);
    printf("%d ", a);
    printf("%d ", b);

    for (int i = 2; i < n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of Fibonacci numbers you want: ");
    scanf("%d", &n);

    fibonacciSeries(n); // function call

    return 0;
}
