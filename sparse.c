#include<stdio.h>
void main(){
int r,c,i=0,j=0,k=1,co=0;
printf("Enter The Number of Rows and Columns\n");
scanf("%d%d",&r,&c);
int a[r][c];
printf("Enter the matrix\n");
for(i=0;i<r;i++){
for(j=0;j<c;j++){
scanf("%d",&a[i][j]);
}
}
printf("The Sparse Matrix\n");
for(i=0;i<r;i++){
for(j=0;j<c;j++){
printf("%d\t",a[i][j]);
}
printf("\n");
}
struct tuple{
int row;
int colm;
int value;
}x[50];
for(i=0;i<r;i++){
for(j=0;j<c;j++){
if(a[i][j]!=0){
co++;
x[k].row=i;
x[k].colm=j;
x[k].value=a[i][j];
k++;
}
}
}
x[0].row=i;
x[0].colm=j;
x[0].value=co;
printf("The Tuple Matrix is\n");
printf("Row\tColumn\tValue\n");
for(int i=0;i<k;i++){
printf("%d\t%d\t%d\n",x[i].row,x[i].colm,x[i].value);
}
}


