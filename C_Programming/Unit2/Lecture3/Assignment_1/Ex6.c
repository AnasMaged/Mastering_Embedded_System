/*
    Author: Anas Maged
    Write Source Code to Swap Two Numbers
*/

#include <stdio.h>
void main(){
    float a , b; 
    printf("Enter value of a: "); 
    fflush(stdout); fflush(stdin);
    scanf("%f" , &a);
    printf("Enter value of b: "); 
    fflush(stdout); fflush(stdin);
    scanf("%f" , &b);
    float temp = a ;
    a = b; b = temp;
    printf("After swapping, value of a = %f\n", a);
    printf("After swapping, value of b = %f\n", b);
}