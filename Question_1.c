#include <stdio.h>
#include <stdlib.h> // cmd line for addition of numbers
int main(int argc, char *argv[])
{
    // a.exe 30 20 // argv[1]= string format we need to convert
    int i, Max;
    int sum = 0;
    for (i = 0; i < argc; i++)                     // argc =3
        sum = sum + atoi(argv[i]);                 // atoi is to convert string arg to int type
    printf("\n Sum of two numbers are:- %d", sum); // i=1 =sum+atoi(argv[1]) = 0+30 =30

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);

    if (a > b && a > c)
    {

        Max = a;
    }
    else if (b > a && b > c)
    {

        Max = b;
    }

    printf("\n Maximum of the numbers out of three numbers above are:-%d", Max);

    return 0;
}