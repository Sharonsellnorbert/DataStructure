#include<stdio.h>
void main(){
int l,i,j,t,a[50];
printf("Enter the limit\n");
scanf("%d",&l);
a[60];
printf("Enter the array\n");
for(int i=0;i<l;i++)
{
scanf("%d",&a[i]);
}
printf("Array before Sorting\n");
for(int i=0;i<l;i++)
{
printf("%d\t",a[i]);
}
i=1;
while(i<l){
j=i;
while(a[j]<a[j-1]){
t=a[j];
a[j]=a[j-1];
a[j-1]=t;
j--;
}
i++;
}
printf("\nArray After Sorting\n");
for(i=0;i<l;i++)
{
printf("%d\t",a[i]);
}
printf("\n");
}

