#include<stdio.h>
void main()
{
int i,j,l,min_index,count=0,temp;
count++;
printf("Enter the limit:");
scanf("%d",&l);
count++;
int a[l];
printf("Enter the numbers:\n");
for(i=0;i<l;i++)
{
count++;
scanf("%d",&a[i]);
count++;
}
for(i=0;i<l;i++)
{
count++;
min_index=i;
count++;
for(j=i+1;j<l;j++)
{
count++;
if(a[min_index]>a[j])
{
count++;
min_index=j;
count+=2;              
}
count++;
}
temp=a[i];
count++;
a[i]=a[min_index];
count++;
a[min_index]=temp;
count+=2; 
}
printf("The Sorted Array is\n");
for(i=0;i<l;i++)
{
count++;
printf("%d\t",a[i]);
count++;
}
count+=2;
printf("\nThe time complexity=%d",count);
printf("\nThe space complexity=%d",(20+(4*l)));
}
