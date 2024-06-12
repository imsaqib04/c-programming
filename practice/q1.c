#include<stdio.h>
#include<conio.h>
#include<math.h>

void factorial(int n){
    int i;
    int fact;
    for (i = 1;i<=n;i++){
        if (n==0){
            printf("factorial is : 1");
        }

        else {
            fact = fact * i;
        }
    }
}

int main(){
    int n;
    int fact;
    printf("enter the value to find the factorial of intiger \n");
    scanf("%d",n);
    factorial(n);
    printf("%d factorial is equal to : ",fact);
    return 0;   
}