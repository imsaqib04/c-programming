# include<stdio.h>
int main(){
    int num1;
    int num2;
    int temp;

    printf("enter the first number\n");
    scanf("%d",&num1);
    printf("enter the second number\n");
    scanf("%d",&num2);


    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("after swapping num1 is %d\n",num1);
    printf("after swapping num2 is %d\n",num2);



   


    return 0;
}