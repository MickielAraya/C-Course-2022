#include "functions.h"

void swap(std::vector<int>& v, int i1, int i2)
{
   int temp = v[i1];
   v[i1] = v[i2];
   v[i2] = temp;
}