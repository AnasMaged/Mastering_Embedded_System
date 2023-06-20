/*
    Author: Anas Maged
    Write C Program to Find ASCII Value of a Character
*/

#include <stdio.h>
void main(){
    char ch;
    printf("Enter a character: ");
    fflush(stdout); fflush(stdin);
    scanf("%c" , &ch);
    printf("ASCII value of %c = %d", ch , ch);
}