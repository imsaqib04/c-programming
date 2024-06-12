// insertAtfront
// insertAtend
// deleteAtfont
// deleteAtend
// search
// reverse_list
// traversal

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){

    int choice;
    int num;

    while(1){
        printf("Enter a choice\n");
        printf("1.Insert an element in list At front\n");
        printf("2.Insert an element in list At end\n");
        printf("3.delete an element in list At front\n");
        printf("4.delete an element in list At end\n");
        printf("5.search an element\n");
        printf("6.reverse list\n");
        printf("7.Traverse link list\n");
        printf("8.Exit\n");
        scanf("%d",&choice);

        switch(choice){
            case 1: printf("Enter the element to add in linklist to front side \n");
                    scanf("%d",&num);
                    insertAtfront(num);
                break;

            case 2: printf("Enter the element to add in linklist to end side \n");
                    scanf("%d",&num);
                    insertAtend(num);
                break;
            
            case 3: printf("Enter the element to delete in linklist to front side \n");
                    scanf("%d",&num);
                    deleteAtfront(num);
                break;

            case 4: printf("Enter the element to delete in linklist to end side \n");
                    scanf("%d",&num);
                    deleteAtend(num);
                break;

            case 5: printf("enter the element to search \n");
                    scanf("%d",&num);
                    search(num);
                break;
            
            case 6: reverse_list();
                break;
                
                printf("\n");

            case 7: traversal();
                break;

            case 8: exit(0);
                break;
            
            default :
                printf("invalid choice");
                break;
        }

    }
    return 0;
}

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;


void insertAtfront( int x){

    struct node *p;
    p = malloc(sizeof(struct node));

    p->data = x;
    p->next = NULL;
    p->next = head;
    head = p;
     // return head;

}
void insertAtend(int x){

    struct node *newnode;                          // value at (newnode)

    newnode = malloc(sizeof(struct node));

    newnode->data =x;                               //(*newnode).data = x;
    newnode->next = NULL;                           // (*newnode).next = NULL; 

    if (head ==NULL){
        head = newnode;
    }
    else{
        struct node *p;
        p = head;

        while(p->next!=NULL){                        //(*p).next!=NULL;
            p = p->next;                             //p=(*p).next;
        }
        p->next = newnode;
    }
}

void traversal(){
    struct node *p;
    p = head;

    if (head == NULL){
        printf("list is empty");
    }
    else {
        while (p!=NULL){
            printf("%d\n",p->data);
            p = p->next;
        }
    }
}

void search(int value){
    struct node *p;                                          //int flag =0;
    p = head;                                                // if (flag ==1){
    if (head == NULL){                                       // printf("element found");
        printf("empty");                       //}
    }                                                        // else {
    else {                                                   // printf("element not found");
        while(p!=NULL){                                      //}
            if (value == p->data){
                printf("Element is present \n");
                return;
            }
            else {
                printf("element not present");
                p = p->next;                              // break;
            }
        }   
    }
}

void reverse_list(){
    struct node *p = NULL;
    struct node *q = NULL;
    while (head != NULL){
        p = head->next;
        head->next = q;
        q = head;
        head = p;
    }
    head = q;
}

void deleteAtfront(){
    if (head == NULL){
        printf("empty");
    }
    else {
    struct node *p;
    head=head->next;    
    free (p);                  
    p = NULL;
    }
}

void deleteAtend(){
    if(head == NULL){
        printf("list is empty");
    }
    else if (head->next==NULL){                 //(*head).next == NULL;
        free (head);
    }
    else {
        struct node *p;
        p = head;
        while (p->next->next!=NULL){
            p = p->next;
        }
        free(p->next);
        p->next = NULL;
    }
}

