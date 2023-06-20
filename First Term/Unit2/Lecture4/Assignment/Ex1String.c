#include <stdio.h>
#include<stdlib.h>
/*
    Author: Anas Maged
    C Program to Find the Frequency of Characters in a String
*/
int main(){
    char s[1000] , c;
    int cnt = 0 , i = 0;
    printf("Enter a string: "); fflush(stdout); fflush(stdin);
    gets(s);
    printf("Enter a character to find frequency: "); fflush(stdout); fflush(stdin);
    scanf("%c" , &c);
    for(i = 0 ; i < (int)sizeof(s) ;i++){
        if(s[i] == c){
            cnt++;
        }
    }
    printf("Frequency of %c = %d\n" , c , cnt);
    return 0;
}