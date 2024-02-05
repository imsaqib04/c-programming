#include<stdio.h>
#include<stdlib.h>
#define N 10
int queue [N];
int rear = -1;
int front = -1;
void enqueue (){
    int x;
    printf("enter the data\n");
    scanf("%d",&x);
    if(rear == N-1){
        printf("queue is over flow condition\n");
    }else if(rear == -1 && front == -1){
        front = rear = 0;
        queue [rear] = x;
    }else{
        rear++;
        queue[rear] = x;
    }
}
void dequeue (){
    if(front == -1 && rear == -1){
        printf("queue is under flow condition\n");
    }else if(front == rear){
        front = rear = -1;
    }else{
        printf("dequeue element is %d\n",queue[front]);
    }
}
void display(){
    int i;
    if(rear == -1 && front == -1){
        printf("queue is empty\n");
    }else{
        printf("displayed element is \n");
        for(i = front; i < rear+1; i++ ){
            printf("%d\n",queue[i]);
        }
    }
}
void main (){
    int choice;
    while(1){
        printf("enter the choice\n");
        printf("1:for enqueue\n");
        printf("2:for dequeue\n");
        printf("3:for display\n");
        printf("4:for exit\n");
        scanf("%d\n",&choice);
        switch (choice){
            case 1: enqueue();
            break;
            case 2: dequeue();
            break;
            case 3: display();
            break;
            case 4:exit(0);
            default: printf("please enter a valid choice\n");
        }
    }
}