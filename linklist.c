#include<stdio.h>
#include<stdlib.h>
void insert_begin();
void insert_end();
void insert_anyloc();
void delete_begin();
void delete_end();
void delete_anyloc();
void display();
struct node{
int data;
struct node*link;
}*temp,*ptr,*head;
void main()
{
int choice;
while(choice!=8){
printf("\n1.INSERTION_FRONT\n2.INSERTION_END\n3.INSERTION_ANY_LOC\n4.DELETION_FRONT\n5.DELETION_END\n6.DELETION_ANY_LOC\n7.DISPLAY\n8.EXIT\n");
printf("Enter the Choice\n");
scanf("%d",&choice);
if(choice==1){
insert_begin();
}
else if(choice==2){
insert_end();
}
else if(choice==3){
insert_anyloc();
}
else if(choice==4){
delete_begin();
}
else if(choice==5){
delete_end();
}
else if(choice==6){
delete_anyloc();
}
else if(choice==7){
display();
}
}
}
void insert_begin(){
temp=(struct node*)malloc(sizeof(struct node));
int data;
struct node*temp;
printf("Enter the data to be inserted");
scanf("%d",&data);
if(temp==NULL){
printf("INSERTION NOT POSSIBLE");
}
else{
temp->data=data;
temp->link=head;
head=temp;
}
}
void insert_end(){
struct node*temp,*ptr;
temp=(struct node*)malloc(sizeof(struct node));
int item;
ptr=head;
if(head==NULL) {
printf("Enter the data");
scanf("%d",&item);
temp->link=NULL;
temp->data=item;
head=temp;
}
else{
printf("Enter the data");
scanf("%d",&item);
while(ptr->link!=NULL){
ptr=ptr->link;
}
ptr->link=temp;
temp->link=NULL;
temp->data=item;
}
}
void insert_anyloc(){
int key,item;
struct node*temp,*ptr;
temp=(struct node*)malloc(sizeof(struct node));
printf("Enter the data of the positon after which insertion is needed");
scanf("%d",&key);
printf("Enter the data to be inserted");
scanf("%d",&item);
ptr=head;
while(ptr->data!=key&&ptr->link!=NULL){
ptr=ptr->link;
}
if(ptr->link==NULL){
printf("Search Fails");
}
else{
temp->link=ptr->link;
ptr->link=temp;
}
}
void delete_begin(){
struct node*temp;
if(head==NULL) {
printf("Cannot delete\n");
}
else if(head->link==NULL) {
temp=head;
head=NULL;
printf("Deleting data=%d\n",temp->data);
free(temp);
}
else{
temp=head;
head=head->link;
printf("Deleting data = %d\n",temp->data);
free(temp);
}
}
void delete_end(){
struct node*temp,*ptr;
if(head->link==NULL){
ptr=head;
head=NULL;
free(ptr);
}
else{
ptr=head;
temp=head->link;
}
while(temp->link!=NULL){
ptr=temp;
temp=temp->link;
}
ptr->link=NULL;
free(temp);
}
void delete_anyloc(){
int key;
if(head==NULL){
printf("Deletion Not Possible");
}
else{
printf("Enter the postion after which data is deleted");
scanf("%d",&key);
struct node*temp,*ptr;
ptr=head;
temp=ptr;
}
while(ptr->link!=NULL){
if(ptr->data==key){
temp->link=ptr->link;
free(ptr);
}
else{
temp=ptr;
ptr=ptr->link;
}
}
}
void display(){
struct node*temp;
if(head==NULL){
printf("EMPTY LIST");
}
else{
printf("The List Element");
for(temp=head;temp!=NULL;temp=temp->link){
printf("%d\t",temp->data);
}
}
}
