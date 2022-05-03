#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i, num,flag= 0;
    cout<<"want to find out if a number is prime or not? we designed this program specially for you"<<endl<<"enter the number \n";
    cin>>num;
    a: for(i=1;i<=num;i++)
    {

        if (num%i==0) flag++;

    }
    if (flag == 2) cout<<"the  number is prime";
    else cout<<"the number isn`t prime";

    return 0;
}
