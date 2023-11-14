#include<stdio.h>
void main()
{
int x,i,l,c=0,co=0;
co++;co++;
printf("Enter the limit\n");
scanf("%d",&l);
co++;
int a[l];
printf("Enter the elements\n");
for(i=0;i<l;i++)
{
co++;
scanf("%d",&a[i]);
co++;
}
printf("Enter the number to search\n");
scanf("%d",&x);
co++;
for(i=0;i<l;i++)
{
co++;
if(a[i]==x)
{
co++;
c++;
break;
}
}
if(c==1)
{
co++;
printf("It is found\n");
}
else
{
co++;
printf("It is not Found\n");
}
co=co+2;
printf("Time Complexity=%d\n",co);
printf("Space Complexity=%d\n",(4*5)+4*l);
}
