/*
    Author: Anas Maged
    C Program to calculate sum of natural numbers
*/

#include <stdio.h>
void main(){
    int n , sum = 0 , i;
    printf("Enter an integer: ");
    fflush(stdout); fflush(stdin);
    scanf("%d" , &n);
    for(i = 1 ; i <= n ; i++){
        sum += i;
    }
    printf("Sum = %d" , sum);
}