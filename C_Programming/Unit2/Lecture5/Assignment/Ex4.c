/*
    Author: Anas Maged
    C program to calculate the power of a nunber using recursion
*/
#include <stdio.h>
int calc(int b , int p){
    if(p == 0) return 1;
    return b * calc(b , p - 1);
}
int main(){
    int b , p;
    printf("Enter base number: ");
    fflush(stdout); fflush(stdin);
    scanf("%d" , &b);
    printf("Enter power number(positive integer): ");
    fflush(stdout); fflush(stdin);
    scanf("%d" ,&p);
    printf("%d ^ %d = %d" , b , p , calc(b , p));
    return 0;
}