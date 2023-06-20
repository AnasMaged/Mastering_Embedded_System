/*
    Author: Anas Maged
    C program to reverse a sentence using recursion
*/
#include <stdio.h>
#include <string.h>
char s[1000] ;
int n ;
void print(int i){
    if(i == n) return ;
    print(i + 1);
    printf("%c" , s[i]);
}
int main(){
    printf("Enter a sentence: ");
    fflush(stdout); fflush(stdin);
    gets(s);
    n = strlen(s);
    print(0);
    return 0;
}