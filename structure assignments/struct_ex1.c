#include<stdio.h>
#include<string.h>
typedef struct
{
	int age;
	char gender[8];
	char name[50];
}BKA;



int main()
{
	BKA a;
	printf("enter your name \n");
	gets(a.name);
	printf("enter your gender m/f \n");
	gets(a.gender);
	printf("enter your age \n");
	scanf("%d",&a.age);
	printf("%s \n",a.name);
	printf("%s \n",a.gender);
	printf("age = %d \n",a.age);

	
	
}
