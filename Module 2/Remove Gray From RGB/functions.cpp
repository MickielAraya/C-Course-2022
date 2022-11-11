#include "functions.h"

void removeGray(int redAmount, int greenAmount, int blueAmount, int result[])
{
   int minValue;
   
   minValue = redAmount;
   if (greenAmount < minValue) 
   {
      minValue = greenAmount;
   }
   if (blueAmount < minValue) 
   {
      minValue = blueAmount;
   }
   
   result[0] = redAmount - minValue;
   result[1] = greenAmount - minValue;
   result[2] = blueAmount - minValue;
   
   return;
} 
 