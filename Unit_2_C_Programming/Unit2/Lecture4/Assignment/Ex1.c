#include <stdio.h>
/*
    Author: Anas Maged
    Write a C program to find sum of two matrix of order 2*2 using multidimensional arrays where, elements of matrix are entered by user.
*/
int main(){
    float a[2][2] , b[2][2] ; int i , j;
    printf("Enter the elements of 1st matrix\n");
    for(i = 0 ; i < 2 ; i++){
        for(j = 0 ; j < 2 ; j++){
            printf("Enter a%d%d:" , i + 1 , j + 1); fflush(stdout); fflush(stdin);
            scanf("%f" , &a[i][j]);
        }
    }
    printf("Enter the elements of 2nd matrix\n");
    for(i = 0 ; i < 2 ; i++){
        for(j = 0 ; j < 2 ; j++){
            printf("Enter b%d%d:" , i + 1 , j + 1); fflush(stdout); fflush(stdin);
            scanf("%f" , &b[i][j]);
        }
    }
    printf("Sum Of Matrix:\n");
    for(i = 0 ; i < 2 ; i++){
        for(j = 0 ; j < 2 ; j++)
            printf("%.1f " , a[i][j] + b[i][j]);
        printf("\n");
    }
    return 0;
}