#include <iostream>
#include <cmath>
#define G 0.00000000006674
double UGL (  double m1, double m2,  double r)
        {
        m1=body1mass; m2=body2mass;r=distancebetweenobjects;
        return (G*m1*m2/(r*r))
        }
using namespace std;
int main()
{
cout<<UGL(100000,100000,1)

return 0;
}
