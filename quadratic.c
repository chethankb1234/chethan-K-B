#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,r1,r2,d;
printf("enter the coefficient of quadratic equation a,b,c");
scanf("%f%f%f",&a,&b,&c);
if(a==0)
{
printf("it is linear equation");
}
d=b*b-4*a*c;
if(d==0)
{
printf("equation as real and equal roots");
r1=r2=(-b/2*a);
printf("r1=r2=%f\n",r1);
}
else if(d>0)
{
printf("the equation as real and distinct");
r1=(-b+sqrt(d))/(2.0*a);
r2=(-b-sqrt(d))/(2.0*a);
printf("r1=%f r2=%f",r1,r2);
} 
else
{
printf("the equation has real and img roots");
float real=(-b)/(2.0*a);
float img=(sqrt(d))/(2.0*a);
printf("r1=%f+i%f",real,img);
printf("r2=%f-i%f",real,img);
}
}
 
