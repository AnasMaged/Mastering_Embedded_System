/*
    Author: Anas Maged
    C Program to check vowel or consonant
*/

#include <stdio.h>
void main(){
    char ch , ch2 ;
    printf("Enter an alphabet: ") ;
    fflush(stdout); fflush(stdin);
    scanf("%c",&ch); ch2 = ch ;
    if(ch2 < 97) ch2 += 32;
    if(ch2 == 'u' || ch2 == 'a' || ch2 == 'i' || ch2 == 'o' || ch2 == 'e'){
        printf("%c is a vowel.\n" , ch);
    }
    else{
        printf("%c is a consonant.\n" , ch);
    }
}