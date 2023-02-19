/*
    Author: Anas Maged
    Write C Program to Print a Integer Entered by a User
*/

#include <stdio.h>
int main(){
    int x;
    printf("Enter a integer: ");
    fflush(stdout); fflush(stdin);
    scanf("%d",&x);
    printf("You entered: %d\n",x);
    return 0;
}