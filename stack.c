#include<stdio.h>
int a[50],top=-1,max_size,i;
void push();
void pop();
void peek();
void display();
void main()
{
int choice;
printf("Enter the Maximum Size of the stack :\n");
scanf("%d",&max_size);
while(choice!=5)
{
printf("Enter your choice:\n1.PUSH\n2.POP\n3.PEEK\n4.DISPLAY\n5.EXIT\n");
scanf("%d",&choice);
if(choice==1) 
{
push();
}
else if(choice==2)
{
pop();
}
else if(choice==3)
{
peek();
}
else if(choice==4)
{
display();
}
}
}
void push()
{
if(top==(max_size-1))
{
printf("\nOVER FLOW\n");
}
else
{
top=top+1;
printf("Enter the element\n");
scanf("%d",&a[top]);
}
}
void pop()
{
int element;
if(top==-1)
{
printf("UNDER FLOW\n");
}
else
{
element=a[top];
top=top-1;
}
}
void peek()
{
if(top==-1)
{
printf("STACK IS EMPTY\n");
}
else{
printf("%d\n",a[top]);
}
}
void display()
{
if(top==-1)
{
printf("STACK IS EMPTY\n");
}
else
{
for(i=top;i>=0;i--)
{
printf("%d\t",a[i]);
}
printf("\n");
}
}

