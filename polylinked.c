#include<stdio.h>
#include<stdlib.h>
void main(){
struct poly{
    int coef;
    int expo;
    struct poly*link;
}*phead=NULL,*qhead=NULL,*rhead=NULL,*p,*q,*r,*temp,*p1,*q1;
int m,n,num,c,e;
printf("Enter The Number of Elements in First Polynomial");
scanf("%d",&m);
printf("Enter the Number Of Elements in Second Polynomial");
scanf("%d",&n);
printf("Enter the elements of first Polynomial\n");
for(int i=0;i<m;i++){
struct poly*temp,*phead,*p1;
temp=(struct poly*)malloc(sizeof(struct poly*));
printf("Enter the Coefficient\n");
scanf("%d",&c);
printf("Enter the Exponent\n");
scanf("%d",&e);
temp->coef=c;
temp->expo=e;
temp->link=NULL;
}
if(phead==NULL){
phead=temp;
p1=temp;
}
else{
p1->link=temp;
p1=temp;
}
printf("Enter the elements of Second Polynomial\n");
for(int i=0;i<m;i++){
struct poly*temp,*qhead,*p,*q,*q1,*phead;
temp=(struct poly*)malloc(sizeof(struct poly*));
printf("Enter the Coefficient\n");
scanf("%d",&c);
printf("Enter the Exponent\n");
scanf("%d",&e);
temp->coef=c;
temp->expo=e;
temp->link=NULL;
}
if(qhead==NULL){
qhead=temp;
q1=temp;
}
else{
q1->link=temp;
q1=temp;
}
struct poly*p,*phead;
p=phead;
while(p->link!=NULL){
printf("%dX^%d+",p->coef,p->expo);
p=p->link;
}
printf("%dX%d",p->coef,p->expo);
}
