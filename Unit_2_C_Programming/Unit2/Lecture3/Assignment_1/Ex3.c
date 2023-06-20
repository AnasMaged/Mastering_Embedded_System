/*
    Author: Anas Maged
    Write C Program to Add Two Integers
*/

#include <stdio.h>
void main(){
    int x , y ; 
    printf("Enter two integers: ");
    fflush(stdout); fflush(stdin);
    scanf("%d %d" , &x , &y);
    printf("Sum: %d", x + y);
}