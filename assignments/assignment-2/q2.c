//fibonacchi:
#include<stdio.h>
int main(){
    int number;
    int a = 0;
    int b = 1;
    int c;
    int i;

    printf("enter the number:");
    scanf("%d",&number);

    for(i = 1; i <number; i++){
        a = b;
        b = c;
        c = a+b;
    }
    printf("%d",c);


    return 0;
}