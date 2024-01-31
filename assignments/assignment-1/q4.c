#include<stdio.h>
int main(){
    int num;
    int fact = 1;
    printf("enter the number \n");
    scanf("%d",&num);
    for(int i = 1; i<=num; i++){
        fact = i * fact;
    }
    printf("factorial of thr number is %d",fact);
    return 0;
}