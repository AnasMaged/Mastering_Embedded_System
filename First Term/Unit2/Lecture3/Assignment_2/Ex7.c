/*
    Author: Anas Maged
    C Program to find factorial of a number
*/

#include <stdio.h>
void main(){
    int n , fact = 1 , i;
    printf("Enter an integer: ");
    fflush(stdout); fflush(stdin);
    scanf("%d" , &n);
    for(i = 1 ; i <= n ; i++){
        fact *= i;
    }
    if(n >= 0)  printf("Factorial = %d" , fact);
    else printf("Error!!! Factorial of negative number doesn't exist\n");
}