# include <stdio.h>
int main(){
    int number;
    int sum = 0;
    int rem;


    printf("enter the number");
    scanf("%d",&number);

    while(number > 10){
        sum = 0;
        while(number > 0){
            rem = number % 10;
            sum = sum + rem;
            number = number / 10;
        }
        number = sum;  
        
    }
    printf("%d",sum);
    

    return 0;
}