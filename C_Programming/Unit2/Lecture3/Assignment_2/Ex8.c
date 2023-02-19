/*
    Author: Anas Maged
    C Program to make a simple calculaor to add, subtract, multiply or divide using switch ... case
*/
#include <stdio.h>
void main(){
    char op ;
    float x , y ;
    printf("Enter operator either + or - or * or divide :"); fflush(stdout); fflush(stdin); scanf("%c" , &op);
    printf("Enter two operands: "); fflush(stdout); fflush(stdin); scanf("%f %f" , &x , &y);
    switch(op){
        case '+':
            printf("%f + %f = %f" , x , y , x + y);
            break;
        case '-':
            printf("%f - %f = %f" , x , y , x - y);
            break;
        case '*':
            printf("%f * %f = %f" , x , y , x * y);
            break;
        case '/':
            printf("%f / %f = %f" , x , y , x / y);
            break;
    }   
}