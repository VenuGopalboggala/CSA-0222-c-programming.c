#include<stdio.h>
struct student
{
char name[50];
int regno;
int m1,m2,m3;
int total;
float cgpa;
}
s;
int main()
	{
	printf("Enter the name:");
	scanf("%s",&s[i].name);
	printf("Enter the reg no:");
	scanf("%d",&s[i].regno);
	printf("Enter the marks:");
	scanf("%d %d %d",&s[i].m1,&s[i].m2,&s[i].m3);
	s[i].total=s.m1+s.m2+s.m3;
	s[i].cgpa=s.total/3;}
	printf("student details:\n")
	for(int i=0;i<2;i++)
	{
	printf("%s",s.name);
	printf("%d",s.regno);
	printf("%d %d %d",s.m1,s.m2,s.m3);
	printf("%d",s.total);
	printf("%f",s.cgpa);
}
}
