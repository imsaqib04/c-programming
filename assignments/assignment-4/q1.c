// write a program to find factorial using recursion:
#include<stdio.h>
int factorial(int n){
    if (n==1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}
void main(){
    int fact;
    int number;
    printf("Enter the number:");
    scanf("%d",&number);
    fact = factorial(number);
    printf("%d",fact);
 
}
