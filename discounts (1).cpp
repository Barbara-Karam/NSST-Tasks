#include <iostream>
using namespace std;
//Compiler version g++ 6.3.0

int main()
{
 int year,month,day,n;
 float price;
 a:cout<<"enter the item's price"<<endl;
 cin>>price;
 if (price>20000) cout<<"oooh, richy rich"<<endl;
 c:cout<<"enter the year of expiry"<<endl;
 cin>>year;
 if (year < 1950)
 {cout<<"not smuggling artificats now, are we?"<<endl;
 d: cout<<"kindly re-enter the date properly"<<endl;
 goto c;}
 else if (year > 2050)
 {cout<<"have been watching back to the future, haven't you? :)"<<endl;
 goto d;}
 b:cout<<"enter the month of expiry"<<endl;
 cin>>month;
  if (month > 12)
  {cout<<"oh, wow!looks like my calender is missing a page."<<endl<<" be right back, I'm suing the company" <<endl<<"kindly re-enter the date properly"<<endl;
  goto b;}
  if (year < 2019)
  cout<<"the price after the discount is"<<endl<<price/2<<endl;
  else if (year == 2019 && month < 4 )
   cout<<"the price after the discount is"<<endl<<price*7/10<<endl;
  else if (year == 2019 && month >= 4 && month < 8)
  cout<<"the price after the discount is"<<endl<<price*9/10<<endl;
  else cout<<"the price is"<<endl<<price<<endl;
  cout<<"any more items?"<<endl<<"please enter 0 if you'd like to scan another item or press anything else to exit"<<endl;
  cin>>n;
  switch(n)
  {
    case 0: goto a;
    default: cout<<"thanks for choosing our program, have a good day!";

  }
  return 0;
}
