#include "functions.h"
 
int countCharacters(char userChar, string userString) 
{
   unsigned int i(0);
   int numChars(0);
   
   while (i < userString.size()) 
   {
      if (userString.at(i) == userChar) 
      {
         numChars++;
      }
      i++;
   }
   
   return numChars;
}