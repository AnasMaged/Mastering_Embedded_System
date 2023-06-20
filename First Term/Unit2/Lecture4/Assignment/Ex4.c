#include <stdio.h>
/*
    Author: Anas Maged
    C Program to Insert an element in an Array
*/
int main(){
    int a[100] , n , x , p , i;
    printf("Enter no of elements : "); fflush(stdout); fflush(stdin);
    scanf("%d" , &n); 
    for(i = 0 ; i < n ; i++){
        scanf("%d" , &a[i]);
    }
    printf("Enter the element to be inserted : "); fflush(stdout); fflush(stdin);
    scanf("%d" , &x);
    printf("Enter the location: "); fflush(stdout); fflush(stdin);
    scanf("%d" , &p); p--;
    for(i = n ; i >= 0 ; i--){
        if(i == p){
            a[i] = x ;
            break;
        }
        a[i] = a[i - 1];
    }
    for(i = 0 ; i <= n;i++){
        printf("%d ", a[i]);
    }
    return 0;
}