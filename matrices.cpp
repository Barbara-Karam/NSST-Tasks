#include <iostream>
using namespace std;
#include "matricesheader.h"
int main()
{
    float matrix[3][3];
    creatin_matrix(matrix);

 	cout << "\n the determinant of matrix = " << determinant(matrix);

    if (determinant(matrix) == 0)
    {
        cout<<"the matrix has no inverse\n";
    }
    else
    {
        inverse(matrix,determinant(matrix));
    }

    return 0;
}
