#include<stdio.h>
#include<math.h>
int main()
{
int i,n;
float a[10],mean,sd,sum,var;
float *p;
printf("enter number of elements:");
scanf("%d",&n);
printf("\nenter the elements:");
p=a;
for(i=0;i,n,i++)
{
scanf("%f"&n);
p++;
}
p=a;
printf("\n input elements are:\n");
for(i=0;i<n;i++)
{
printf("%f",*p);
p++;
}
p=a;
sum=sd=mean=var=0;
for(i=0;i<n;i++)
{
sum=sum+(*p);
p++;
}
mean=sum/n;
p=a;
for(i=0;i<n;i++)
{
var=var+pow((*p-mean),2);
p++;
}
var=
