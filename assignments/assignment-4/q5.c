// stack :
#include<stdio.h>
#include<stdlib.h>
    int arr[10];
    int top = -1;
    void push();
    void pop();
    void show();
    void peek();
    int main(){ 
    int choice;
        while(1){
           printf("\n1.push\n2.pop \n3.display\n4.peek value\n5.exit");
           printf("\nenter the choice\n");
           scanf("%d" ,&choice);
        
        switch(choice){
        
         case 1:push();
         break;
         case 2:pop();
         break;
         case 3:show();
         break;
         case 4:peek();
         break;
         case 5:exit(0);
         default:
         printf("invalid choice");
            
        }
        }
    }
void push(){
    int n;
   if (top == 10-1){
       printf("stack overflow");
   }
   else{
       printf("enter the element to add\n");
       scanf("%d",&n);
       top = top+1;
       arr[top] = n;
   }
}
void pop(){
    if (top == -1){
        printf("stack_underflow");
    }
    else {
        printf("pop element  %d ", arr[top] );
    top = top-1;
}
}
void show(){ 
    int i;
    if(top == -1){
        printf("stack_underflow");
    }
    else {
        printf("\nelement present in arr is:");
        for(i=top;i>=0;i--){
            printf("%d",arr[i]);
        }
    }
}
void peek(){
    if(top == -1){
        printf("stack_empty");
    }
    else {
        printf("print last value : %d",arr[top]);
    }
}






