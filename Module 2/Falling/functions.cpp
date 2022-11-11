#include<cmath>
#include <iostream>
#include "functions.h"

using namespace std;

float fallingDistance(int time) 
{
if (time = 1) return 0;
  return (0.5) * 9.8 * pow(time, 2);
}