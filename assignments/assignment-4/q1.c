#include<stdio.h>
int factorial(int n){
    if (n==1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}
int main(){
    int fact;
    int number;
    printf("Enter the number:");
    scanf("%d",&number);
    fact = factorial(number);
    printf("%d",fact);
    return 0;
}