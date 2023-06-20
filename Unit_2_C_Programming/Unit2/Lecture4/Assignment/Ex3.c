#include <stdio.h>
/*
    Author: Anas Maged
    This program asks user to enter a matrix (size of matrix is specified by user) and this program finds the transpose of that matrix and displays it.
*/
int main(){
    int a[100][100] , r , c  , i , j;
    printf("Enter rows and column of matrix: "); fflush(stdout); fflush(stdin);
    scanf("%d %d" , &r , &c); printf("Enter elements of matrix: \n");
    for(i = 0 ; i < r ; i++)
        for(j = 0 ; j < c ; j++){
            printf("Enter elements a%d%d: " , i + 1 , j + 1); fflush(stdout); fflush(stdin);
            scanf("%d" , &a[i][j]);
        }
    printf("Entered Matrix: \n");
    for(i = 0 ; i < r ; i++){
        for(j = 0 ; j < c ; j++)
            printf("%d " , a[i][j]);
        printf("\n");
    }
    printf("Transpose of Matrix: \n");
    for(i = 0 ; i < c ;i++){
        for(j = 0 ; j < r ; j++)
            printf("%d " , a[j][i]);
        printf("\n");
    }
    return 0;
}