#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *link;

}*NODE;


NODE  create( int );
NODE insert_front( NODE ,int );
NODE insert_end(NODE ,int );
void display();

int main()
{
    NODE *head=NULL;
    int data;
	int choice;
	while(1)
	{
		printf("\n\n-----SINGLY LINKED LIST MENU-----\n\n");
		printf("1:Insert Front\n2:Insert End\n3:Display\n4:EXIT\n\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("Enter data: ");
                    scanf("%d",&data);
                    head=insert_front(head,data);
                    break;

			case 2: printf("\nEnter data: ");
                    scanf("%d",&data);
                    head=insert_end(head,data);
                    break;

			case 3:
                    display(head);
                    break;

			case 4: exit(0);

			default: printf("Invalid Choice\n");
		}
	}
	return 0;
}

NODE create(int data)
{
	NODE temp;
	temp=(NODE*)malloc(sizeof(NODE));
	temp->data=data;
	temp->link=NULL;
	return temp;
}

NODE insert_front(NODE head,int data)
{
	NODE temp;
	temp=create(data);
	if(head==NULL)
	{
		head=temp;
    }
	else
	{
		temp->link=head;
		head=temp;
	}
	return head;
}

NODE insert_end(NODE head,int data)
{
	NODE ptr,temp;
	temp=create(data);
	if(head==NULL)
    {
		head=temp;
    }
    else if(head->link==NULL)
    {
		head->link=temp;
    }
    else
	{
		ptr=head;
		while(ptr->link!=NULL)
        {
			ptr=ptr->link;
        }
		ptr->link=temp;
	}
	return head;
}

void display(NODE head)
{
	NODE ptr;
	if(head==NULL)
	{
		printf("List is empty. \n");
    }
	else
	{
		ptr=head;
		printf("Numbers in list are:\n");
		while(ptr!=NULL)
		{
			printf("%d ->",ptr->data);
			ptr=ptr->link;
		}
	}
}
