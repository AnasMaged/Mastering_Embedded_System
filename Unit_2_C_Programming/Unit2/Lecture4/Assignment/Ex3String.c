#include <stdio.h>
#include<string.h>
/*
    Author: Anas Maged
    C Program to Reverse String Without Using Library Function 
*/
int main(){
    char s[1000];
    printf("Enter the string : "); fflush(stdout); fflush(stdin);
    gets(s);
    int i = 0 , j = strlen(s) - 1;
    char temp ;
    while(i < j){
        temp = s[i] ;
        s[i] = s[j] ;
        s[j] = temp;
        i++ ; j--;
    }
    printf("Reverse string is : %s\n" , s);
    return 0;
}