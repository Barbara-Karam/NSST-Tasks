#include <conio.h>
#include <iostream>
using namespace std;

int main()
{
    char letter;
    cout << "Press any number to see its multiplication table or press anything else to exit \n";

    while (1)
    {
        letter = getch();
        if (letter == '1')
        {
                cout<<"the multiplication table of 1:"<<endl;
                cout<<"1 x 0 = 0\n 1 x 1 = 1\n 1 x 2 = 2\n 1 x 3 = 3\n 1 x 4 = 4\n 1 x 5 = 5\n 1 x 6 = 6\n 1 x 7 = 7 \n 1 x 9 = 9\n 1 x 10 = 10\n 1 x 11 = 11 \n1 x 12 = 12\n";
                cout << '\a'<<"\n";

        }
        else if (letter == '2')
        {
                cout<<"the multiplication table of 2:"<<endl;
                cout << "2 x 1 = 2 \n2 x 2 = 4\n2 x 3 = 6\n2 x 4 = 8\n2 x 5 = 10\n2 x 6 = 12\n2 x 7 = 14\n2 x 8 = 16\n2 x 9 = 18\n2 x 10 = 20\n2 x 11 = 22\n2 x 12 = 24\n";
                cout << '\a'<<"\n";

        }
        else if (letter == '3')
        {
                cout<<"the multiplication table of 3:"<<endl;
                cout<<"3 x 1 = 3\n3 x 2 = 6\n3 x 3 = 9\n3 x 4 = 12\n3 x 5 = 15\n3 x 6 = 18\n3 x 7 = 21\n3 x 8 = 24\n3 x 9 = 27\n3 x 10 = 30\n3 x 11 = 33\n3 x 12 = 36\n";
                cout << '\a'<<"\n";

        }
        else if (letter == '4')
        {
                cout<<"the multiplication table of 4:"<<endl;
                cout<<"4 x 0 = 0 \n4 x 1 = 4 \n4 x 2 = 8 \n4 x 3 = 12 \n4 x 4 = 16 \n4 x 5 = 20 \n4 x 6 = 24 \n4 x 7 = 28 \n4 x 8 = 32 \n4 x 9 = 36 \n4 x 10 = 40 \n4 x 11 = 44 \n4 x 12 = 48 \n";
                cout << '\a'<<"\n";

        }
        else if (letter == '5')
        {
                cout<<"the multiplication table of 5:"<<endl;
                cout<<"5 x 0 = 0 \n5 x 1 = 5 \n5 x 2 = 10 \n5 x 3 = 15 \n5 x 4 = 20 \n5 x 5 = 25 \n5 x 6 = 30 \n5 x 7 = 35 \n5 x 8 = 40 \n5 x 9 = 45 \n5 x 10 = 50 \n5 x 11 = 55 \n5 x 12 = 60 \n";
                cout << '\a'<<"\n";

        }
        else if (letter == '6')
        {
                cout<<"the multiplication table of 6:"<<endl;
                cout<<"6 x 0 = 0 \n6 x 1 = 6 \n6 x 2 = 12 \n6 x 3 = 18 \n6 x 4 = 24 \n6 x 5 = 30 \n6 x 6 = 36 \n6 x 7 = 42 \n6 x 8 = 48 \n6 x 9 = 54 \n6 x 10 = 60 \n6 x 11 = 66 \n6 x 12 = 72 \n";
                cout << '\a'<<"\n";

        }
        else if (letter == '7')
        {
                cout<<"the multiplication table of 7:"<<endl;
                cout<<"7 x 0 = 0 \n7 x 1 = 7 \n7 x 2 = 14 \n7 x 3 = 21 \n7 x 4 = 28 \n7 x 5 = 35 \n7 x 6 = 42 \n7 x 7 = 49 \n7 x 8 = 56 \n7 x 9 = 63 \n7 x 10 = 70 \n7 x 11 = 77 \n7 x 12 = 84 \n";
                cout << '\a'<<"\n";

        }
        else if (letter == '8')
        {
                cout<<"the multiplication table of 8:"<<endl;
                cout<<"8 x 0 = 0 \n8 x 1 = 8 \n8 x 2 = 16 \n8 x 3 = 24 \n8 x 4 = 32 \n8 x 5 = 40 \n8 x 6 = 48 \n8 x 7 = 56 \n8 x 8 = 64 \n8 x 9 = 72 \n8 x 10 = 80 \n8 x 11 = 88 \n8 x 12 = 96 \n";
                cout << '\a'<<"\n";

        }
        else if (letter == '9')
        {
                cout<<"the multiplication table of 9:"<<endl;
                cout<<"9 x 0 = 0 \n9 x 1 = 9 \n9 x 2 = 18 \n9 x 3 = 27 \n9 x 4 = 36 \n9 x 5 = 45 \n9 x 6 = 54 \n9 x 7 = 63 \n9 x 8 = 72 \n9 x 9 = 81 \n9 x 10 = 90 \n9 x 11 = 99 \n9 x 12 = 108 \n";
                cout << '\a'<<"\n";

        }
        else if (letter == '0')
        {
                cout<<"the multiplication table of 0:"<<endl;
                cout<<"0 x 0 = 0 \n0 x 1 = 0 \n0 x 2 = 0 \n0 x 3 = 0 \n0 x 4 = 0 \n0 x 5 = 0 \n0 x 6 = 0 \n0 x 7 = 0 \n0 x 8 = 0 \n0 x 9 = 0 \n0 x 10 = 0 \n0 x 11 = 0 \n0 x 12 = 0 \n";
                cout << '\a'<<"\n";

        }
        else
        {
            break;
        }

    }
    return 0;
}
