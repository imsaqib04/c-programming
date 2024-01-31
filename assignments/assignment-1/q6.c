# include <stdio.h>
int main(){
    int num1;
    int num2;
    int result = 0;
    int i;

    printf("enter the first number\n");
    scanf("%d",&num1);
    printf("enter the second number\n");
    scanf("%d",&num2);

    for(i =1; i <= num1; i++){
        result = result + num2;
    }
    printf("%d", result);
return 0;
}