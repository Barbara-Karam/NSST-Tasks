#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i=0,num;
    cout<<"want to find out if a number is prime or not? we designed this program specially for you"<<endl;
    while (i==0)
    {
    cout<<"enter the number \n";
    int flag=0;
    cin>>num;
    a: for(i=1;i<=num;i++)
    {

        if (num%i==0) flag++;

    }
    if (flag == 2) cout<<"the  number is prime\n";
    else cout<<"the number isn`t prime\n";
    cout<<"wanna try another number? tap 0 to repeat the process"<<endl;
    cin>>i;
    }
    return 0;
}
