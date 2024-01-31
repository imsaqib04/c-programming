#include<stdio.h>
int main (){
    int number;
    int count =  0;
    int i;
    printf("enter the number:");
    scanf("%d",&number);

   for(i = 1; i <= number; i++){
    if(number % i == 0){
        count++;
    }
   }
    if(count == 2){
        printf("number is prime \n");
    }else{
         printf("number is not prime\n");
    }
       
    
       
    


    return 0;
}