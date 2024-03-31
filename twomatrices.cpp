#include <iostream>
#include "matricesheader.h"
using namespace std;
int main()
{

  float matrix1 [3][3]; float matrix2 [3][3];
  cout<<"enter the data of the first matrix"<<endl;
  creatin_matrix(matrix1);
  cout<<"enter the  data of the second matrix"<<endl;
  creatin_matrix(matrix2);
  multplication_of_matrices(matrix1,matrix2);
  return 0;
}
