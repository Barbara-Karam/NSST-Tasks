#include <stdio.h>
typedef struct
{
	float salary;
	float bonus;
	float deduction;
}employee;
float TOTAL(float A,float B,float C)
{return(A+B-C);}
int main()
{
float x,y,z,a;
employee Ahmad;
employee Mohammud;
employee Mahmoud;
Ahmad.salary=6000;Ahmad.bonus=1000;Ahmad.deduction=500;
Mohammud.salary=4000;Mohammud.bonus=500;Mohammud.deduction=300;
Mahmoud.salary=3000;Mahmoud.bonus=0;Mahmoud.deduction=1000;
x=TOTAL(Ahmad.salary,Ahmad.bonus,Ahmad.deduction);
y=TOTAL(Mohammud.salary,Mohammud.bonus,Mohammud.deduction);
z=TOTAL(Mahmoud.salary,Mahmoud.bonus,Mahmoud.deduction);
a=x+y+z;
printf("%f \n",a);
    
}

