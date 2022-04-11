#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
struct stack
{
	int data[SIZE];
	int top;
};
typedef struct stack STK;

int full(STK );
int empty(STK );
void PUSH(STK *,int );
int POP(STK *);
void DISPLAY(STK );

void main()
{
	STK s;
	int ch,num,x;

	s.top=-1;//Initially stack top points to -1

	while(1)
	{
		printf("\n1:PUSH \n2:POP \n3:DISPLAY \n4:EXIT");
		printf("\nEnter any option[1-4]\n");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1: printf("\nEnter the element to be pushed");
                    scanf("%d",&num);
                    PUSH(&s,num);
                    break;
			case 2:x=POP(&s);
                    if(x!=-1)
                    {
                        printf("\n%d is popped",x);
                    }
                    break;
			case 3: DISPLAY(s);
                    break;
			case 4:exit(0);
                    break;
		}
	}

}
int full(STK s)
{
	if(s.top==SIZE-1)
		return 1;
	else
		return 0;
}

int empty(STK s)
{
	if(s.top==-1)
		return 1;
	else
		return 0;
}

void PUSH(STK *ps,int num)
{
	if(full(*ps))
	{
		printf("\nStack Overflow!!");

	}
	else
    {
        ps->top++;
        ps->data[ps->top]=num;
    }
}

int POP(STK *ps)
{
	int temp;

	if(empty(*ps))
	{
		printf("\nStack Underflow");
		return -1;
	}
	else
    {
        temp=ps->data[ps->top];
        ps->top--;
        return temp;
    }
}

void DISPLAY(STK s)
{
	int i;
	if(empty(s))
	{
		printf("\nStack is empty");
	}
	else
    {
        printf("Elements are\n");
        for(i=s.top; i>=0; i--)
        {
            printf("%d\t",s.data[i]);
        }
    }
}
