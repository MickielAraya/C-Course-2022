#include <cmath>
#include "functions.h"

const double R = pow(2, 1.0 / 12.0);
 
double nextFreq(double f)
{
   return f * pow(R, 1);
}