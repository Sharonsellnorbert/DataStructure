#include<stdio.h>
void main()
{
struct Polynomial{
int coef;
int exp;
};
int l;
printf("Enter the number of variables");
scanf("%d",&l);
struct Polynomial X[l];
printf("Enter the exponent and coefficient");
for(int i=0;i<l;i++){
scanf("%d",&X[i].exp);
scanf("%d",&X[i].coef);
}
printf("The Polynomial is\n");
for(int i=0;i<l;i++){
if(i!=l-1){
printf("%dx^%d+",X[i].coef,X[i].exp);
}
else{
printf("%dx^%d\n",X[i].coef,X[i].exp);
}
}
}

