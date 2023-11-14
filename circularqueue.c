#include<stdio.h>
int a[50],front=-1,rear=-1,item=0,Max_Size;
void enqueue();
void dequeue();
void display();
void main()
{
printf("Enter THe Max Size of Array");
scanf("%d",&Max_Size);
int choice;
while(choice!=4){
printf("\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\n");
printf("Enter the Choice\n");
scanf("%d",&choice);
if(choice==1){
enqueue();
}
else if(choice==2){
dequeue();
}
else if(choice==3){
display();
}
}
}
void enqueue(){
if(front==-1&&rear==-1){
front=0;
rear=0;
printf("Enter the Number to be enqueued");
scanf("%d",&item);
a[rear]=item;
}
else if(front==(rear+1)%Max_Size)
{
printf("OVERFLOW");
}
else{
rear=(rear+1)%Max_Size;
printf("Enter the number to be Enqueued");
scanf("%d",&item);
a[rear]=item;
}
}
void dequeue(){
if(rear==-1&&front==-1){
printf("UNDERFLOW");}
else if(rear==front){
item=a[front];
rear=-1;
front=-1;
printf("The Dequeued Element is %d",item);
}
else{
item=a[front];
front=(front+1)%Max_Size;
printf("The Dequeued Element is %d",item);
}
}
void display(){
int i;
if(rear==-1&&front==-1){
printf("UNDERFLOW");
}
else {
printf("Elements of Queue\n");
printf("Position\tElements\n");
for(i=front;i!=rear;i=((i+1)%Max_Size)){
printf("%d\t\t",i);
printf("%d\n",a[i]);
}
printf("%d\t\t",i);
printf("%d\t",a[i]);
printf("\nFront:%d\n",front);
printf("Rear:%d",rear);
}
}










