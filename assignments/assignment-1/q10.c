# include <stdio.h>
int main(){
    int number;
    int rem;
    int sum = 0;


    printf("enter the number");
    scanf("%d",&number);

    while(number > 0){
         rem = number % 10;
         sum = sum + rem;
         number = number / 10;

    }
    printf("sum of digits of number = %d",sum);

    return 0;
}