/*
    Author: Anas Maged
    C Program to check whether a number is positive or negative
*/

#include <stdio.h>
void main(){
    float x;
    printf("Enter a number: ");
    fflush(stdout); fflush(stdin);
    scanf("%f" , &x);
    if(x < 0) printf("%f is a negative.\n" , x);
    else if(x > 0) printf("%f is a positive.\n" , x);
    else printf("You entered zero.\n");
}