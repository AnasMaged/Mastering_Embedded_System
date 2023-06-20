/*
    Author: Anas Maged
    Write C Program to Multiply two Floating Point Numbers
*/

#include <stdio.h>
void main(){
    float x , y ; 
    printf("Enter two integers: ");
    fflush(stdout); fflush(stdin);
    scanf("%f %f" , &x , &y);
    printf("Product: %f", x * y);
}