#include<stdio.h>
void main(){
 int option;
 int result;
 int a,b;
 printf("choose options\n 1. add\n 2. sub\n 3. sub\n 4. div\n 5. exit\n");
 scanf("%d\n",&option);
 printf("enter the value of a\n");
 scanf("%d\n",&a);
 printf("enter the value of b\n");
 scanf("%d\n",&b);
 while(1){

    switch(option){
    case 1:
           result = a+b;
    break;
    case 2:
           result = a-b;
    break;
    case 3: 
           result = a*b;
    break;
    case 4: 
           result = a/b;
    break;

    default:
    printf("invalid option");
  }
  }
 printf("%d\n",result);
  }