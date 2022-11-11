#include "functions.h"

void breakdown(string pn, string result[]) 
{
   string temp("");
   for (unsigned int i=0; i < pn.size(); i++)
   {
      temp = temp + pn.at(i);
      if (i == 2)
      {
         result[0] = temp;
         temp = "";
      }
      else if (i == 5)
      {
         result[1] = temp;
         temp = "";
      }
      else if (i == 9)
      {
         result[2] = temp;
         temp = "";
      }
   }
   return;
}