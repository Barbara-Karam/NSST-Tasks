#include<stdio.h>
int func(int* ptr2)
{
	int sum;
	for(int i=0;i<=9;i++)
	{
		sum += ptr2[i];
	}
	return sum;
}
int main()
{
	int arr[]={0,1,2,3,4,5,6,7,8,9};
	int* ptr;
	ptr=arr;
	printf("%d",func(ptr));
}