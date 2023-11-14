#include<stdio.h>
void main(){
int A[10],i,j,l,temp,co=0;
co++;
printf("Enter the limit\n");
scanf("%d",&l);
co++;
printf("Enter the array\n");
for(i=0;i<l;i++){
co++;
scanf("%d",&A[i]);
co++;
}
for(i=0;i<l;i++){
co++;
for(j=i+1;j<l;j++){
co++;
if(A[i]>A[j]){
temp=A[i];
A[i]=A[j];
A[j]=temp;
co++;
co++;
co++;
}
co++;
}
co++;
}
co++;
printf("The Sorted Array is\n");
for(i=0;i<l;i++){
co++;
printf("%d\t",A[i]);
}
co++;
co++;co++;
printf("\nTime Complexity=%d\n",co);
printf("Space Complexity=%d\n",(20)+4*l);
}


