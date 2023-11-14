#include<stdio.h>
int a[50],top=-1,item=0,Max_Size;
void push();
void pop();
void peek();
void display();
void main()
{
printf("Enter THe Max Size of Array");
scanf("%d",&Max_Size);
int choice;
while(choice!=5){
printf("\n1.PUSH\n2.POP\n3.PEEK\n4.DISPLAY\n5.EXIT\n");
printf("Enter the Choice\n");
scanf("%d",&choice);
if(choice==1){
push();
}
else if(choice==2){
pop();
}
else if(choice==3){
peek();
} 
else if(choice==4){
display();
}
}
}
void push(){
if(top<Max_Size-1){
printf("Enter the number to be pushed\n");
scanf("%d",&item);
top++;
a[top]=item;
}
else{
printf("OVERFLOW");
}
}
void pop(){
if(top==-1){
printf("UNDERFLOW");
}
else{
item=a[top];
printf("POPED Item is %d\n",item);
top--;
}
}
void peek(){
if(top==-1){
printf("UNDERFLOW");
}
else{
printf("%d\n",a[top]);
}
}
void display(){
if(top!=-1){
printf("The Stack is\n");
for(int i=top;i>=0;i--){
printf("%d\t",a[i]);
}
}
else{
printf("UNDERFLOW");
}
}
 
