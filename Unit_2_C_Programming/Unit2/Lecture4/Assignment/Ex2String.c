#include <stdio.h>
#include<stdlib.h>
/*
    Author: Anas Maged
    C Program to Find the Length of a String 
*/
int main(){
    char s[1000];
    int i = 0;
    printf("Enter a string: "); fflush(stdout); fflush(stdin);
    gets(s);
    while(s[i] != 0){
        i++;
    }
    printf("Length of string: %d\n" , i);
    return 0;
}