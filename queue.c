#include<stdio.h>
int a[50],front=0,rear=-1,item=0,Max_Size;
void enqueue();
void dequeue();
void peek();
void display();
void main()
{
printf("Enter THe Max Size of Array");
scanf("%d",&Max_Size);
int choice;
while(choice!=5){
printf("\n1.ENQUEUE\n2.DEQUEUE\n3.PEEK\n4.DISPLAY\n5.EXIT\n");
printf("Enter the Choice\n");
scanf("%d",&choice);
if(choice==1){
enqueue();
}
else if(choice==2){
dequeue();
}
else if(choice==3){
peek();
} 
else if(choice==4){
display();
}
}
}
void enqueue(){
if(rear<Max_Size-1){
rear++;
printf("Enter the number to be Enqueued");
scanf("%d",&item);
a[rear]=item;
}
else{
printf("OVERFLOW");
}
}
void dequeue(){
if(rear==front){
a[front]=item;
front=0;
rear=-1;
}
else if(rear<front){
printf("UNDERFLOW");
}
else{
item=a[front];
front++;
}
}
void peek(){
if(rear<front){
printf("UNDERFLOW");
}
else{
printf("%d",a[front]);
}
}
void display(){
if(rear==-1){
printf("UNDERFLOW");
}
else{
for(int i=front;i<=rear;i++){
printf("%d\t",a[i]);
}
}
}

