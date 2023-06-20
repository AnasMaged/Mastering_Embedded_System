#include <stdio.h>
/*
    Author: Anas Maged
    C Program to Search an element in Array 
*/
int main(){
    int a[100] , n , x , p , i;
    printf("Enter no of elements : "); fflush(stdout); fflush(stdin);
    scanf("%d" , &n); 
    for(i = 0 ; i < n ; i++){
        scanf("%d" , &a[i]);
    }
    printf("Enter the element to be searched  : "); fflush(stdout); fflush(stdin);
    scanf("%d" , &x);
    for(i = 0 ; i < n;i++){
        if(a[i] == x){
            printf("Number found at the location = %d \n" , i + 1);
            break;
        }
    }
    return 0;
}