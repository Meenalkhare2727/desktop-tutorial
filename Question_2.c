//factorial 
#include <stdio.h>
int main (){
    int num ,fact = 1;
printf("Enter a number to get its Factorial:- ");
scanf("%d",&num);

if(num < 0 ){
    printf("Error Factorial of negative number does nt exist.");
}else{
    for (int i = 1; i <= num; i++)
    {
        fact = fact*i;
    }
    printf("The factorial of %d is %d\n",num,fact);
}

    return 0;
}