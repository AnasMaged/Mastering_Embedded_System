#include <stdio.h>
/*
    Author: Anas Maged
    This program takes n number of element from user(where, n is specified by user), stores data in an array and calculates the average of those numbers. 
*/
int main(){
    float a[1000] , sum = 0  ; int i , j , n;
    printf("Enter the numbers of data: "); fflush(stdout); fflush(stdin);
    scanf("%d" , &n);
    for(i = 0 ; i < n ; i++){
        printf("%d. Enter number: " , i + 1); fflush(stdout); fflush(stdin);
        scanf("%f" , &a[i]);
        sum += a[i];
    }
    sum /= n;
    printf("Average = %.2f\n" , sum);
    return 0;
}