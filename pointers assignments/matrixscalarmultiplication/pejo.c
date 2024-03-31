#include<stdio.h>
double funct(double *ptr1,double *ptr2);
int main()
{
	double arr1[]={5,1,2,3,4};
	double arr2[]={5,1,2,3,4};
	double *ptr1,*ptr2;
	ptr1=arr1;ptr2=arr2;
	float x=funct(ptr1,ptr2);
	printf("%f",x);
}

double funct(double *ptr1,double *ptr2)
{
	int sum=0;
	
	for(int i=0;i<=4;i++)
	{
		sum+=(ptr1[i]*ptr2[i]);
	}
	return sum;
};