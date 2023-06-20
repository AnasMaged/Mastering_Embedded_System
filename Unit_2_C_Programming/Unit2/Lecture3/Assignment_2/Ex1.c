/*
    Author: Anas Maged
    Write C Program to check whether a number is even or odd
*/

#include <stdio.h>
void main(){
    int x ; 
    printf("Enter an integer you want to check: ") ;
    fflush(stdout); fflush(stdin);
    scanf("%d",&x);
    if(x % 2 == 0){
        printf("%d is even.\n" , x);
    }
    else{
        printf("%d is odd.\n" , x);
    }
}