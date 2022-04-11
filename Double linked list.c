#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* prev;
    struct Node* next;
};
typedef struct Node node;

node* insertFront(node*,int);
node* deleteFront(node*);
void Display(node*);
void reverseDisplay(node*);
node* insertRear(node*,int);
node* deleteRear(node*);
node* deletePos(node*,int);

int main(){
    int ch=0,a=0;
    node* head=NULL;
    int pos=0;
    while(1){
        printf("\n1.Add front\n");
        printf("2.Add rear\n");
        printf("3.Delete front\n");
        printf("4.Delete rear\n");
        printf("5.Display\n");
        printf("6.Reverse display\n");
        printf("7.Delete specific position\n");
        printf("8.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch){
        case 1:
            printf("\nEnter the element:");
            scanf("%d",&a);
            head=insertFront(head,a);
            break;
        case 2:
            printf("\nEnter the element:");
            scanf("%d",&a);
            head=insertRear(head,a);
            break;
        case 3:
            head=deleteFront(head);
            break;
        case 4:
            head=deleteRear(head);
            break;
        case 5:
            Display(head);
            break;
        case 6:
            reverseDisplay(head);
            break;
        case 7:
            printf("Enter the position you want to delete:");
            scanf("%d",&pos);
            head=deletePos(head,pos);
            break;
        case 8:
            exit(0);
            break;
        default:
            printf("\nWrong choice entered.");

        }
    }
    return 0;
}

node* insertFront(node* head,int a){
    node* temp=malloc(sizeof(node));
    temp->data=a;
    temp->prev=NULL;
    if(head==NULL){
        temp->next=NULL;
        return temp;
    }
    else{
        temp->next=head;
        head->prev=temp;
        return temp;
    }
}

node* deleteFront(node* head){
    if(head==NULL){
        printf("Empty linked list");
        return head;
    }
    else if(head->next==NULL){
        head=NULL;
        return head;
    }
    else{
        head=head->next;
        head->prev=NULL;
        return head;
    }
}

void Display(node* head){
    if(head==NULL){
        printf("Linked list empty.");
        return;
    }
    while(head->next!=NULL){
        printf("%d--->",head->data);
        head=head->next;
    }
    printf("%d",head->data);
}

void reverseDisplay(node* head){
    node* temp=malloc(sizeof(node));
    temp=head;
    if(head==NULL){
        printf("Linked list empty.");
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    while(temp->prev!=NULL){
        printf("%d-->",temp->data);
        temp=temp->prev;
    }
    printf("%d",temp->data);
}

node* insertRear(node* head,int a){
    node* temp=malloc(sizeof(temp));
    temp->data=a;
    temp->next=NULL;
    if(head==NULL){
        temp->prev=NULL;
        return temp;
    }
    node* temp2=head;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next=temp;
    temp->prev=temp2;
    return head;
}

node* deleteRear(node* head){
    if(head==NULL){
        printf("Empty linked list.");
        return head;
    }
    else if(head->next==NULL){
        head=NULL;
        return head;
    }
    else{
        node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp=temp->prev;
        temp->next=NULL;
        return head;
    }
}
node* deletePos(node* head,int n){
    if(head==NULL){
        printf("Empty linked list");
        return head;
    }
    else{
        node* p=head;
        int flag=0;
        n--;
        while(p->next!=NULL&&n--){
            if(n==1) flag=1;
            p=p->next;
        }
        if(flag==1){
            p->next->prev=p->prev;
            p->prev->next=p->next;
            printf("Element deleted");
        }
        return head;
    }
}
