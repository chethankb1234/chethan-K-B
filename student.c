#include<stdio.h>
int main()
{
struct student
{
int stu_id;
char name[20];
float lang1_marks;
float lang2_marks;
float sc_marks;
float mat_marks;
float sst_marks;
float comp_marks;
float avg;
};
struct student s[20];
int i,n;
printf("enter the number of records")
scanf("%d",&n);
printf("enter %d student details...\n",n);
for(i=0;i<n;i++)
{
printf("\n\nenter student ID:");
scanf("%d"'s[i].std_id);
printf("enter the student name");
scanf("%s",s[i].name);
printf("enter the lang1 marks");
scanf("%f",&s[i].lang1_marks);
printf("enter the lang2 marks");
scanf("%f",&s[i].lang2_marks);
printf("enter science marks");
scanf("%f",&s[i].sc_marks);
printf("enter the maths marks");
scanf("%f",&s[i].mat_marks);
printf("enter sst marks");
scanf("%f",&s[i].sst_marks);
printf("enter comouter marks");
scanf("%f",&s[i].comp_marks)
for(i=0;i<n;i++)
{
s[i].avg=(s[i].lang1_marks+s[i].lang2_marks+s[i].sc_marks+s[i].sst_marks+s[i].comp_marks)/6.0;
}
printf("student scoring above the average marks....\n");
printf("\n\nID\tname\taverage\n\n");
for(i=0;i<n;i++)
{
if(s[i].avg>=35.0)
printf("%d\t%s\t%f\n",s[i].stu_id,s[i].name,s[i].avg);
}
for(j=0;j<q;j++)
{
c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
}
}
}
printf("thev product of matrix is - \n");
for (i=0;i<m;i++)
{
for (j=0;j<q;j++)
{
printf("%d",c[i][j]);
}
printf("\n");
}
return 0;
}
