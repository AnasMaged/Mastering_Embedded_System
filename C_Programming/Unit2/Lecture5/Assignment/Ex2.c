/*
    Author: Anas Maged
    C program to calculate factorial of a number using recursion
*/
#include <stdio.h>
int fact(int x){
    if(x <= 1) return 1;
    return x * fact(x - 1);
}
int main(){
    int x ;
    printf("Enter a positive number: ");
    fflush(stdout); fflush(stdin);
    scanf("%d" , &x);
    printf("Factorial of %d = %d\n" , x , fact(x));
    return 0;
}