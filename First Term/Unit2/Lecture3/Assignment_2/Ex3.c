/*
    Author: Anas Maged
    C Program to find the largest number among three numbers
*/

#include <stdio.h>
void main(){
    float a , b , c;
    printf("Enter three numbers: ");
    fflush(stdout); fflush(stdin);
    scanf("%f %f %f" , &a , &b , &c);
    float mx = a;
    if(mx < b) mx = b ;
    if(mx < c) mx = c;
    printf("Largest number = %f" , mx);
}