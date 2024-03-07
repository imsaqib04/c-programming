//program for single link list
// traversal, insertion, deletion
#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert(int x){

    struct node *newnode;

    newnode = malloc(sizeof(struct node));
    newnode ->data = x;
    newnode->next = NULL;

    if (head==NULL){
        head=newnode;

    }
    else{

        struct node *p;
        p=head;
        while(p->next!=NULL){

            p=p->next;
        }
        p->next=newnode;
    }  
        
}

void traverse(){

    struct node *p;
    p=head;
    
    if (head != NULL){
    
       while(p!= NULL){

            printf("%d\n",p->data);
            p = p-> next;
       }
    }
    else {
          printf("empty");
    }
}

void delete_from_end(){

    if (head==NULL){
        
    printf(" the list is empty");
    }
        else if ( head ->next == NULL){
            free(head);
            head = NULL;
        }
        else{
        struct node *p;
        p=head;

        while(p->next->next!=NULL){
            p=p->next;
        }

        free(p->next);
        
        p->next=NULL;
    }       
}


int main(){
    int choice;
    int num;

    while(1){
        printf("Enter a choice\n");
        printf("1.Insert element in list\n");
        printf("2.Traverse link list\n");
        printf("3.Delete an element from end\n");
        printf("4.Exit\n");
        scanf("%d",&choice);

        switch(choice){
            case 1: printf("Enter the element to add in linklist\n");
                    scanf("%d",&num);
                    insert(num);
                break;
            case 2: traverse();
                break;
            case 3: delete_from_end();
                break;
            case 4:
            exit(0);
                break;
        }

    }

    return 0;
}