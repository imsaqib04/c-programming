//calculate area of shapes( square, rectangle, circle, triangle).
#include<stdio.h>
int main(){

    int option,result;
    int a,b;
    printf(" slelct a option\n 1 square\n 2 rectangle\n 3 circle\n 4 triangle\n 5 exit\n");
    scanf("%d",&option);

    switch(option){
        case 1:
                  
               printf("enter the value of side");
               scanf("%d",&a);
               result = a*a;

               break;


        case 2:
            
               printf("enter the value of lenght");
               scanf("%d",&a);
               printf("enter the value of width");
               scanf("%d",&b);
               result = a*b;

               break;

          
        case 3:
               
               printf("enter the value of radius");
               scanf("%d",&a);
               result = 3.14*a*a;
               
               break;
        case 4:
              
               printf("enter the value of base");
               scanf("%d",&a);
               printf("enter the value of height");
               scanf("%d",&b);
               result = (a*b)/2;
               
               break;


        case 5:

               printf("exit the program");
               break;   

               default:
                       printf("invalid choice");

    }

                printf("%d",result);    
                return 0;   

}
