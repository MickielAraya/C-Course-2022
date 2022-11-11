#include <iostream>
#include "functions.h"

using namespace std;

void swap(vector<int>& v, int i1, int i2)
{
   int temp = v[i1];
   v[i1] = v[i2];
   v[i2] = temp;
}


void sortVector(vector<int>& v)
{
   int last = v.size()-1;
   while (last > 0)
   {
      for (int i(0); i < last; i++)
      {         
         if (v[i] > v[i+1])
            swap(v, i, i+1);         
      }
      last = last - 1;
   }
}