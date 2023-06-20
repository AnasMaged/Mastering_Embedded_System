/*
    Author: Anas Maged
    Prime numbers between two intervals by making user-defined function
*/
#include <stdio.h>
int prime(int x){
    int i , res = 1;
    for(i = 2 ; i * i <= x ; i++){
        if(x % i == 0) res = 0;
    }
    if(x == 1) res = 0;
    return res;
}
void PrintPrimes(int l , int r){    
    int i ;
    printf("Prime numbers between %d and %d are: " , l , r);
    for(i = l ; i <= r ; i++){
        if(prime(i)) printf("%d " , i) ;
    }
}
int main(){
    int l , r;
    printf("Enter two numbers: ") ;
    fflush(stdout); fflush(stdin);
    scanf("%d %d" , &l , &r);
    PrintPrimes(l , r);
    return 0;
}