#include<stdio.h>
int main()
{
int m,n,p,q,i,j,k;
printf("enter the size of the matrix A:");
scanf("%d%d",&m,&n);
printf("enter the size of matrix B:");
scanf("%d%d",&p,&q);
if(n!=p)
{
printf("matrix multiplication is not possible\n");
return 1;
}
int a[m][n], b[p][q], c[m][q];
printf("enter data into matrix A:");
for (i=0;i<m;i++)
{
for (j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("matrix A -\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",a[i][j]);
}
printf("enter data into matrix B:");
for (i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("matrix b -\n");
for (i=0;i<p;i++)
{
for (j=0;j<q;j++)
{
printf("%d",b[i][j]);
}
printf("\n");
}
for (i=0;i<m;i++)
{
for (j=0;j<m;j++)
{
c[i][j]=0;
for(k=0;k<n;k++)
{
c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
}
}
}
printf("the product matrix is - \n");
for (i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
printf("%d", c[i][j]);
}
printf("\n");
}
return 0;
}
