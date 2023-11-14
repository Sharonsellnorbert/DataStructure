#include<stdio.h>
void main()
{
int x,i,l,c=0,co=0,j=0,temp,left=0;
co++;co++;co++;co++;
printf("Enter the limit\n");
scanf("%d",&l);
co++;
int right=l-1,middle=(left+right)/2;
co++;co++;
int a[l];
printf("Enter the elements\n");
for(i=0;i<l;i++)
{
co++;
scanf("%d",&a[i]);
co++;
}
co++;
for(i=0;i<l;i++)
{
co++;
for(j=i+1;j<l;j++)
{
co++;
if(a[i]>a[j])
{
co++;
temp=a[i];
a[i]=a[j];
a[j]=temp;
co++;co++;co++;
}
co++;
}
co++;
}
co++;
printf("The Sorted Array\n");
for(i=0;i<l;i++)
{
co++;
printf("%d\t",a[i]);
}
co++;
printf("\nEnter the number to search\n");
scanf("%d",&x);
co++;
while(left<=right)
{
co++;
if(x==a[middle])
{
co++;co++;co++;
c++;
break;
}
else if(x<a[middle])
{
co++;
right=middle-1;
middle=(left+right)/2;
co++;co++;
}
else if(x>a[middle])
{
co++;
left=middle+1;
middle=(left+right)/2;
co++;co++;
}
co++;co++;co++;
}
co++;co++;
if(c==1)
{
co++;
printf("The element is present\n");
}
else{
co++;
printf("Element is not present\n");
} 
co++,co++;
co++;co++;
printf("Time Complexity=%d\n",co);
printf("Space Complexity=%d\n",(40)+4*l);
}
